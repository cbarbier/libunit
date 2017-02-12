/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:18:02 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:39:36 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_test.h"

int		framework_launcher(void)
{
	t_unit	tests;

	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\t\t{ ------------------------------- }");
	ft_putendl("\t\t{ - 42 FRAMEWORK LIBUNIT TESTER - }");
	ft_putendl("\t\t{ ------------------------------- }");
	load_test(&tests, " 1/5 [EASY] - Mmh, like to say OK ?\t", \
	basic_test_success);
	load_test(&tests, " 2/5 [EASY] - What happend on KO ?\t", \
	basic_test_error);
	load_test(&tests, " 3/5 [HARD] - Can you catch a SIGSEGV ? ", \
	lets_segv);
	load_test(&tests, " 4/5 [HARD] - Can you catch a SIGBUS ?  ", \
	lets_berror);
	load_test(&tests, " 5/5 [HARD] - Can you catch a TIMEOUT ? ", \
	lets_timeout);
	load_test(&tests, " 5/5 [HARD] - Can you catch a ABORT   ? ", \
	lets_abort);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
