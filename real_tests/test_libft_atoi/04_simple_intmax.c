/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_simple_intmax.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:16:22 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 19:41:33 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

int	simple_intmax(void)
{
	int real_atoi;
	int ft_atoi;

	real_atoi = atoi("2147483647 + 1");
	ft_atoi = ft_atoi("2147483647 + 1");
	if (real_atoi == ft_atoi)
		return (0);
	else
		return (-1);
}
