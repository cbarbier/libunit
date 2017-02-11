/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:14:13 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 01:16:57 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	*ft_memalloc(size_t size)
{
	int		len;
	char	*ret;

	len = (sizeof(char) * size);
	ret = (char *)malloc(len);
	if (!ret)
		return (NULL);
	ft_memset((void *)ret, '\0', size);
	return (ret);
}
