/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 08:48:39 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 01:17:05 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char *new;

	if (n == 0)
		return (str);
	new = (char *)str;
	while (n--)
	{
		*new = (char)c;
		if (n)
			new++;
	}
	*(char *)str = (char)c;
	return (str);
}
