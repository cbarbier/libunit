/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_memcpy_small.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 21:08:35 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:12:27 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_memcpy_small(void)
{
	const char src[15] = "HELLO WORLD\0";
	char dst[2];

	ft_memcpy(dst, src, 4);
	if (!ft_strcmp(dst, "HE"))
		return (0);
	else
		return (-1);
}
