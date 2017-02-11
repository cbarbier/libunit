/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strtrim.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:54:59 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strtrim_launcher(void)
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
		load_test(tests, " 1/4 [EASY] - Empty string ?\t",\
		strtrim_empty);
		load_test(tests, " 2/4 [EASY] - Space and Tabs before \t",\
		strtrim_space_before);
		load_test(tests, " 3/4 [EASY] - Space and Tabs after \t ",\
		strtrim_space_after);
		load_test(tests, " 4/4 [EASY] - Space and Tabs before and after \t  ",\
		strtrim_space_before_and_after);
		tests->returnval = ft_execute_tests(tests);
		ft_display_resume(tests, 1);
		return (tests->returnval);
	}
	return (-1);
}
