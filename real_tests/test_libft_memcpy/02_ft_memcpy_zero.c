/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_memcpy_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:49:37 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:37:52 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_memcpy_zero(void)
{
	const char	src[12] = "HELL\0 WORLD\0";
	char		dst[12];

	ft_memcpy(dst, src, 11);
	if (!ft_strcmp(dst, src))
		return (0);
	else
		return (-1);
}
