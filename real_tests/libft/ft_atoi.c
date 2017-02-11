/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 09:01:03 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_atoi(const char *str)
{
	int		pos;
	int		total;
	int		is_negative;

	total = 0;
	pos = 0;
	while (str[pos] == '\n' || str[pos] == '\v' || str[pos] == '\t' ||
			str[pos] == '\r' || str[pos] == '\f' || str[pos] == ' ')
		pos++;
	is_negative = (str[pos] == '-') ? -1 : 1;
	if (str[pos] == '-' || str[pos] == '+')
		pos++;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 48 && str[pos] <= 57)
			total = total * 10 + (str[pos] - '0');
		else
			return (total * is_negative);
		pos++;
	}
	return (total * is_negative);
}
