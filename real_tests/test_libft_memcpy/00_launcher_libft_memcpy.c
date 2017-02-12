/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_memcpy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:41:34 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:17:58 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_memcpy_launcher(void)
{
	t_unit	tests;
	t_unit	bonus;

	tests.head = NULL;
	tests.cur = NULL;
	bonus.head = NULL;
	bonus.cur = NULL;
	ft_putendl("\n### FT_MEMCPY TESTS - EASY");
	load_test(&tests, " 1/5 [EASY] - HELLO WORLD\t\t\t",
	ft_memcpy_easy);
	load_test(&tests, " 2/5 [EASY] - ZERO IS LIFE\t\t\t",
	ft_memcpy_zero);
	load_test(&tests, " 3/5 [EASY] - NOTHING BUT THE BEST\t\t",
	ft_memcpy_null);
	load_test(&tests, " 4/5 [EASY] - SIZE IS ALSO IMPORTANT\t\t",
	ft_memcpy_size);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	ft_putendl("\n### FT_MEMCPY TESTS - BONUS UNDEFINED BEHAVIOURS");
	load_test(&bonus, " 1/1 [BONUS] - TOO SMALL FOR YOU ( EXPECTS \"HE\")",
	ft_memcpy_small);
	bonus.returnval = ft_execute_tests(&bonus);
	ft_display_resume(&bonus, 1);
	return ((tests.returnval + bonus.returnval) ? -1 : 0);
}
