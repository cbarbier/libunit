/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strsplit.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:33:37 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 19:47:57 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

int		ft_strsplit_launcher(void)
{
	int		(*pt0)();
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	t_unit	*tests;

	pt0 = no_split;
	pt1 = two_words;
	pt2 = many_split;
	pt3 = nullstring;
	tests = ft_memalloc(sizeof(t_unit));
	if (tests)
	{
		tests->head = NULL;
		tests->cur = NULL;
		ft_putendl("\t\t{ ------------------------------- }");
		ft_putendl("\t\t{ -     FT_STRSPLIT TESTER      - }");
		ft_putendl("\t\t{ ------------------------------- }");
		load_test(tests, " 1/4 [EASY] - no split\t", &pt0);
		load_test(tests, " 2/4 [EASY] - two words\t", &pt1);
		load_test(tests, " 3/4 [HARD] - many split ", &pt2);
		load_test(tests, " 4/4 [HARD] - null string", &pt3);
		tests->returnval = ft_execute_tests(tests);
		ft_display_resume(tests, 1);
		return (tests->returnval);
	}
	return (-1);
}
