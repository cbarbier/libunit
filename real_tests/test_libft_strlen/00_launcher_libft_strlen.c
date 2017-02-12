/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strlen.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:55:48 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/12 20:16:35 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_strlen_launcher(void)
{
	t_unit	tests;

	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\n### FT_STRLEN TESTS");
	load_test(&tests, " 1/4 [EASY] - one char string\t\t\t",
	ft_strlen_one_char_string);
	load_test(&tests, " 2/4 [EASY] - string with tab and spaces\t",
	ft_strlen_tab_and_spaces);
	load_test(&tests, " 3/4 [HARD] - NULL string\t\t\t ",
	ft_strlen_null_string);
	load_test(&tests, " 4/4 [HARD] - string containing a null char\t",
	ft_strlen_string_with_null);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
