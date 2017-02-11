/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_atoi.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:13:11 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_atoi_launcher(void)
{
	t_unit	*tests;

	tests = ft_memalloc(sizeof(t_unit));
	if (tests)
	{
		tests->head = NULL;
		tests->cur = NULL;
		ft_putendl("\t\t{ ------------------------------- }");
		ft_putendl("\t\t{ - 42 FRAMEWORK LIBUNIT TESTER - }");
		ft_putendl("\t\t{ ------------------------------- }");
		load_test(tests, " 1/4 [EASY] - Are you NULL ?\t",\
		simple_null);
		load_test(tests, " 2/4 [EASY] - Deep negative mind \t",\
		simple_negative);
		load_test(tests, " 3/4 [EASY] - Deep positive mind \t ",\
		simple_positive);
		load_test(tests, " 4/4 [HARD] - Maximum int power \t  ",\
		simple_intmax);
		load_test(tests, " 4/4 [HARD] - Invalid chain \t",\
		invalid_chain);
		tests->returnval = ft_execute_tests(tests);
		ft_display_resume(tests, 1);
		return (tests->returnval);
	}
	return (-1);
}
