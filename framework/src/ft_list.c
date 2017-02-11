/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:53:32 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 02:06:05 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_init(t_unit_test **head, t_unit_test **cur)
{
	if (!(*head))
	{
		(*head) = (t_unit_test *)ft_memalloc(sizeof(t_unit_test));
		(*cur) = (*head);
		(*head)->next = NULL;
	}
	else
	{
		if ((*cur)->next == NULL)
			(*cur)->next = (t_unit_test *)ft_memalloc(sizeof(t_unit_test));
		(*cur) = (*cur)->next;
		(*cur)->next = NULL;
	}
}
