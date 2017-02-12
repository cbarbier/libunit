/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:53:32 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 00:11:16 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_init(t_unit_test **head, t_unit_test **cur)
{
	if (!(*head))
	{
		if (!(*head = (t_unit_test *)ft_memalloc(sizeof(t_unit_test))))
			return ;
		(*cur) = (*head);
		(*head)->next = NULL;
		return ;
	}
	if ((*cur)->next == NULL)
		if (!((*cur)->next = (t_unit_test *)ft_memalloc(sizeof(t_unit_test))))
			return ;
	(*cur) = (*cur)->next;
	(*cur)->next = NULL;
}
