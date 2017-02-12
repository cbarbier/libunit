/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:52:00 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 01:45:53 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static int	ft_tests(char *av, int ac)
{
	int flag;

	flag = 0;
	if ((ac == 1 || !ft_strcmp(av, "ft_strlen")) && (flag = 1))
		ft_strlen_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_atoi")) && (flag = 1))
		ft_atoi_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_strsplit")) && (flag = 1))
		ft_strsplit_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_strtrim")) && (flag = 1))
		ft_strtrim_launcher();
	else if (ac > 1 && !flag)
	{
		ft_putstr("### ");
		ft_putstr("\033[0;32mWARNING:\033[0m ");
		ft_putstr(av);
		ft_putstr(" does not match any TEST ROUTINE\n");
	}
	return (0);
}

int			main(int ac, char **av)
{
	int i;

	if (ac == 1)
		return (ft_tests(av[0], ac));
	i = 0;
	ft_putendl("");
	ft_putendl("\t\t{ ------------------------------- }");
	ft_putendl("\t\t{ - 42 FRAMEWORK LIBUNIT TESTER - }");
	ft_putendl("\t\t{ ------------------------------- }\n");
	while (i++ < ac - 1)
		ft_tests(av[i], ac);
	return (0);
}
