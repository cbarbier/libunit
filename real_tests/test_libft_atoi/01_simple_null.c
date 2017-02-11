/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_simple_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:16:22 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 21:04:45 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_atoi_null(void)
{
	int real_atoi;
	int ft_atoi_ret;

	real_atoi = atoi("NULL");
	ft_atoi_ret = ft_atoi("NULL");
	if (real_atoi == ft_atoi_ret)
		return (0);
	else
		return (-1);
}
