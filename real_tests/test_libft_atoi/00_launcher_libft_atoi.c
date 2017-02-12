/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_atoi.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:13:11 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 20:14:58 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_atoi_launcher(void)
{
	t_unit	tests;

	tests.head = NULL;
	tests.cur = NULL;
	ft_putendl("\n### FT_STRTRIM TESTS");
	load_test(&tests, " 1/4 [EASY] - Are you NULL ?\t\t\t",\
			ft_atoi_null);
	load_test(&tests, " 2/4 [EASY] - Deep negative mind \t\t",\
			ft_atoi_negative);
	load_test(&tests, " 3/4 [EASY] - Deep positive mind \t\t",\
			ft_atoi_positive);
	load_test(&tests, " 4/4 [HARD] - Maximum int power \t\t",\
			ft_atoi_intmax);
	tests.returnval = ft_execute_tests(&tests);
	ft_display_resume(&tests, 1);
	return (tests.returnval);
}
