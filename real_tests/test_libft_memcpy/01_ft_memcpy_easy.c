/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_memcpy_easy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:42:51 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:37:56 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_memcpy_easy(void)
{
	const char	src[12] = "HELLO WORLD\0";
	char		dst[12];

	ft_memcpy(dst, src, 11);
	if (!ft_strcmp(dst, src))
		return (0);
	else
		return (-1);
}