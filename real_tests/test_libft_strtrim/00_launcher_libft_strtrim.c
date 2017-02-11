/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strtrim.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:54:59 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 21:33:56 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strtrim_launcher(void)
{
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	t_unit	*tests;

	pt1 = ft_strtrim_empty;
	pt2 = ft_strtrim_space_before;
	pt3 = ft_strtrim_space_after;
	tests = ft_memalloc(sizeof(t_unit));
	if (tests)
	{
		tests->head = NULL;
		tests->cur = NULL;
		ft_putendl("\n### FT_STRTRIM TESTS");
		load_test(tests, " 1/3 [EASY] - Empty string ?\t\t\t",\
		&pt1);
		load_test(tests, " 2/3 [EASY] - Space and Tabs before \t\t",\
		&pt2);
		load_test(tests, " 3/3 [EASY] - Space and Tabs after \t\t ",\
		&pt3);
		tests->returnval = ft_execute_tests(tests);
		ft_display_resume(tests, 1);
		return (tests->returnval);
	}
	return (-1);
}
