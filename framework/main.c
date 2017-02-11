/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:05:55 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 02:20:46 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ft_test()
{
	int	valid;

	valid = 0;
	if(valid)
		return(0);
	else
		return (-1);
}

int	ft_test_un()
{
	int valid;

	valid = 1;
	if(valid)
		return (0);
	else
		return (-1);
}


int	main()
{
	int	(*ptr)();
	int (*pt2)();
	t_unit	*tests;

	ptr = ft_test;
	pt2 = ft_test_un;

	tests = ft_memalloc(sizeof(t_unit));
	tests->head = NULL;
	tests->cur = NULL;

	load_test(tests, "TEST 1", &ptr);
	load_test(tests, "TEST 2", &pt2);

	ft_execute_tests(tests);

	return (0);
}
