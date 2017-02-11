/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_invalid_chain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:23:46 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 21:05:00 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_atoi_chain(void)
{
	int real_atoi;
	int ft_atoi_ret;

	real_atoi = (int)atoi("flks;flsj ;flkaj fdjszf;ljkafzl;f/k zlds");
	ft_atoi_ret = (int)ft_atoi("flks;flsj ;flkaj fdjszf;ljkafzl;f/k zlds");
	if (real_atoi == ft_atoi_ret)
		return (0);
	else
		return (-1);
}
