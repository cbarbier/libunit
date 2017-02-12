/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:18:02 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 20:01:21 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_test.h"

int		framework_launcher(void)
{
	int		(*pt0)();
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	int		(*pt4)();
	t_unit	tests;

	pt0 = basic_test_success;
	pt1 = basic_test_error;
	pt2 = lets_segv;
	pt3 = lets_berror;
	pt4 = lets_timeout;
	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\t\t{ ------------------------------- }");
	ft_putendl("\t\t{ - 42 FRAMEWORK LIBUNIT TESTER - }");
	ft_putendl("\t\t{ ------------------------------- }");
	load_test(&tests, " 1/5 [EASY] - Mmh, like to say OK ?\t", &pt0);
	load_test(&tests, " 2/5 [EASY] - What happend on KO ?\t", &pt1);
	load_test(&tests, " 3/5 [HARD] - Can you catch a SIGSEGV ? ", &pt2);
	load_test(&tests, " 4/5 [HARD] - Can you catch a SIGBUS ?  ", &pt3);
	load_test(&tests, " 5/5 [HARD] - Can you catch a TIMEOUT ? ", &pt4);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
