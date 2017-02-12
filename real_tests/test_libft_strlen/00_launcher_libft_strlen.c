/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strlen.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:55:48 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/12 01:04:13 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_strlen_launcher(void)
{
	int		(*pt0)();
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	t_unit	tests;

	pt0 = ft_strlen_one_char_string;
	pt1 = ft_strlen_tab_and_spaces;
	pt2 = ft_strlen_null_string;
	pt3 = ft_strlen_string_with_null;
	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\n### FT_STRLEN TESTS");
	load_test(&tests, " 1/4 [EASY] - one char string\t\t\t", &pt0);
	load_test(&tests, " 2/4 [EASY] - string with tab and spaces\t", &pt1);
	load_test(&tests, " 3/4 [HARD] - NULL string\t\t\t ", &pt2);
	load_test(&tests, " 4/4 [HARD] - string containing a null char\t", &pt3);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
