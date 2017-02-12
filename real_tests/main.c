/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:52:00 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:33:38 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static int	ft_tests(char *av, int ac)
{
	int flag;
	int total;

	total = 0;
	flag = 0;
	if ((ac == 1 || !ft_strcmp(av, "ft_strlen")) && (flag = 1))
		total += ft_strlen_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_atoi")) && (flag = 1))
		total += ft_atoi_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_strsplit")) && (flag = 1))
		total += ft_strsplit_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_strtrim")) && (flag = 1))
		total += ft_strtrim_launcher();
	if ((ac == 1 || !ft_strcmp(av, "ft_memcpy")) && (flag = 1))
		total += ft_memcpy_launcher();
	else if (ac > 1 && !flag)
	{
		ft_putstr("### ");
		ft_putstr("\033[0;32mWARNING:\033[0m ");
		ft_putstr(av);
		ft_putstr(" does not match any TEST ROUTINE\n");
		return (1);
	}
	return (total);
}

int			ft_printout(int total)
{
	if (total != 1)
	{
		ft_putendl("");
		ft_putendl("\t####\t\tYOUR FINAL TESTS RESULTS\t\t####");
		ft_putstr("\t=> ");
		if (!total)
			ft_putendl("\033[0;32mSUCCESS ALL TESTS PASSED, CONGRATS !\033[0m");
		else
			ft_putendl("\033[0;31mYOU FAILED - SHAME ON YOU\033[0m");
		return (total);
	}
	return (-1);
}

int			main(int ac, char **av)
{
	int i;
	int total;

	total = 0;
	ft_putendl("");
	ft_putendl("\t\t{ ------------------------------- }");
	ft_putendl("\t\t{ - 42 FRAMEWORK LIBUNIT TESTER - }");
	ft_putendl("\t\t{ ------------------------------- }\n");
	if (ac == 1)
	{
		return (ft_printout(ft_tests(av[0], ac)));
	}
	i = 0;
	while (i++ < ac - 1)
		total += ft_tests(av[i], ac);

	return (ft_printout(total));
}
