/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strsplit.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:33:37 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/12 20:15:54 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_strsplit_launcher(void)
{
	t_unit	tests;

	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\n### FT_STRSPLIT TESTS");
	load_test(&tests, " 1/4 [EASY] - no split\t\t\t\t", \
	ft_strsplit_no_split);
	load_test(&tests, " 2/4 [EASY] - two words\t\t\t\t", \
	ft_strsplit_two_words);
	load_test(&tests, " 3/4 [HARD] - many split\t\t\t", \
	ft_strsplit_many_split);
	load_test(&tests, " 4/4 [HARD] - null string\t\t\t", \
	ft_strsplit_null_string);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
