/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:55:02 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 02:06:01 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit *tests, char *testname, int (**ft)())
{
	ft_init(&tests->head, &tests->cur);
	if(tests->cur)
	{
		tests->cur->name = ft_strdup(testname);
		tests->cur->ft = ft;
	}
}

void	ft_execute_tests(t_unit *tests)
{
	t_unit_test	*tmp;

	tmp = tests->head;
	while(tmp)
	{
		tmp->ret = (*tmp->ft)();
		printf("EXECUTING TEST %s WITH RETURN : [%i] \n", tmp->name, tmp->ret);
		tmp = tmp->next;
	}
}
