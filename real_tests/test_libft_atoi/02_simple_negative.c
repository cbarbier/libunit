/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_simple_negative.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:16:22 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 19:41:29 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	simple_negative(void)
{
	int real_atoi;
	int ft_atoi;

	real_atoi = atoi("-42");
	ft_atoi = ft_atoi("-42");
	if (real_atoi == ft_atoi)
		return (0);
	else
		return (-1);
}
