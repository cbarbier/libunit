/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_memcpy_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:59:36 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:08:00 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_memcpy_size(void)
{
	const char src[15] = "HELLO WORLD\0";
	char dst[6];

	ft_memcpy(dst, src, 4);
	if (!ft_strcmp(dst, "HELL"))
		return (0);
	else
		return (-1);
}
