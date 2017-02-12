/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:03:16 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 20:54:10 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *tmp_src;
	char *tmp_dest;

	if (n == 0 || dest == src)
		return (dest);
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	while (--n)
		*tmp_dest++ = *tmp_src++;
	*tmp_dest = *tmp_src;
	return (dest);
}
