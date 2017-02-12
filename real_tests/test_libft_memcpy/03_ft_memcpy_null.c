/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_memcpy_null.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:59:36 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:37:47 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_memcpy_null(void)
{
	const char	src[4] = " \0		";
	char		dst[12];

	ft_memcpy(dst, src, 11);
	if (!ft_strcmp(dst, src))
		return (0);
	else
		return (-1);
}
