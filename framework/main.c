/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:05:55 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 07:58:52 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ft_test_segv(void)
{
	char *test;

	test = NULL;
	*test = 1;
	return (0);
}

int	ft_test_bus(void)
{
	char *s;

	s = "hello world";
	*s = 'H';
	return (0);
}

int	ft_test_ok(void)
{
	return (0);
}

int	ft_test_nok(void)
{
	return (-1);
}

int	main(int ac, char **av)
{
	int		(*pt0)();
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	t_unit	*tests;

	pt0 = ft_test_segv;
	pt1 = ft_test_bus;
	pt2 = ft_test_ok;
	pt3 = ft_test_nok;
	tests = ft_memalloc(sizeof(t_unit));
	tests->head = NULL;
	tests->cur = NULL;
	load_test(tests, "We'll test a segfault catching ... ", &pt0);
	load_test(tests, "We'll test a buserror catching ...", &pt1);
	load_test(tests, "We'll test a valid test ...", &pt2);
	load_test(tests, "We'll test an invalid test ...", &pt3);
	printf("RETURN VALUE OF ROUTINE : %i \n", ft_execute_tests(tests));
	ft_display_resume(tests, 1);
	return (0);
}
