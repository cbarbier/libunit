/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_atoi.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:13:11 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 21:14:36 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_atoi_launcher(void)
{
	int		(*pt0)();
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	t_unit	*tests;

	pt0 = ft_atoi_null;
	pt1 = ft_atoi_negative;
	pt2 = ft_atoi_positive;
	pt3 = ft_atoi_intmax;
	tests = ft_memalloc(sizeof(t_unit));
	if (tests)
	{
		tests->head = NULL;
		tests->cur = NULL;
		ft_putendl("\n### FT_STRTRIM TESTS");
		load_test(tests, " 1/4 [EASY] - Are you NULL ?\t\t\t",\
		&pt0);
		load_test(tests, " 2/4 [EASY] - Deep negative mind \t\t",\
		&pt1);
		load_test(tests, " 3/4 [EASY] - Deep positive mind \t\t",\
		&pt2);
		load_test(tests, " 4/4 [HARD] - Maximum int power \t\t",\
		&pt3);
		tests->returnval = ft_execute_tests(tests);
		ft_display_resume(tests, 1);
		return (tests->returnval);
	}
	return (-1);
}
