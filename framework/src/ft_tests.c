/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:55:02 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 08:47:45 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit *tests, char *testname, int (**ft)())
{
	ft_init(&tests->head, &tests->cur);
	if (tests->cur)
	{
		tests->cur->name = ft_strdup(testname);
		tests->cur->ft = ft;
	}
}

int		ft_test_process(t_unit_test *test, int (**ft)())
{
	pid_t	pid;
	int		result;
	int		status;

	pid = fork();
	if (pid >= 0)
	{
		if (pid == 0)
		{
			result = (*ft)();
			exit(result);
		}
		else
		{
			waitpid(pid, &status, 0);
			test->ret = -1;
			if (WIFSIGNALED(status))
				test->signal = WTERMSIG(status);
			else
				test->ret = (WEXITSTATUS(status)) ? -1 : 0;
		}
	}
	return (0);
}

int		ft_execute_tests(t_unit *tests)
{
	t_unit_test	*tmp;

	tmp = tests->head;
	while (tmp)
	{
		ft_test_process(tmp, tmp->ft);
		ft_putchar('\t');
		ft_putstr(tmp->name);
		ft_putstr(" : \t[");
		if (!tmp->ret)
			ft_putstr("OK");
		else if (tmp->signal == SIGSEGV)
			ft_putstr("SEGV");
		else if (tmp->signal == SIGBUS)
			ft_putstr("BUSE");
		else
			ft_putstr("KO");
		ft_putendl("]");
		tmp = tmp->next;
	}
	return (ft_display_resume(tests, 0) ? -1 : 0);
}

int 	ft_display_resume(t_unit *tests, int verbose)
{
	int			total;
	int			ok;
	t_unit_test	*tmp;

	total = 0;
	ok = 0;
	tmp = tests->head;
	while (tmp && ++total)
	{
		ok += (!tmp->ret) ? 1 : 0;
		tmp = tmp->next;
	}
	if(total && verbose)
	{
		ft_putnbr(ok);
		ft_putchar('/');
		ft_putnbr(total);
		ft_putstr(" TESTS PASSED -> ");
		if (ok == total)
			ft_putendl("\033[0;32m- TAKE A REST BIATCH - \033[0m");
		else
			ft_putendl("\033[0;31m- WORK MORE BIATCH -");
		ft_putstr("\033[0m");
	}
	return (total - ok);
}
