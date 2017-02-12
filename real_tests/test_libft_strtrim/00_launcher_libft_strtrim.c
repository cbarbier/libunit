/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strtrim.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:54:59 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 20:16:58 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strtrim_launcher(void)
{
	t_unit	tests;

	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\n### FT_STRTRIM TESTS");
	load_test(&tests, " 1/3 [EASY] - Empty string ?\t\t\t",\
			ft_strtrim_empty);
	load_test(&tests, " 2/3 [EASY] - Space and Tabs before \t\t",\
			ft_strtrim_space_before);
	load_test(&tests, " 3/3 [EASY] - Space and Tabs after \t\t ",\
			ft_strtrim_space_after);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
