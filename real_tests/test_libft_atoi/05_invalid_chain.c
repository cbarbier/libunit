/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_invalid_chain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:23:46 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 19:41:37 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	invalid_chain(void)
{
	int real_atoi;
	int ft_atoi;

	real_atoi = atoi("flks;flsj ;flkaj fdjszf;ljkafzl;f/k zlds");
	ft_atoi = ft_atoi("flks;flsj ;flkaj fdjszf;ljkafzl;f/k zlds");
	if (real_atoi == ft_atoi)
		return (0);
	else
		return (-1);
}
