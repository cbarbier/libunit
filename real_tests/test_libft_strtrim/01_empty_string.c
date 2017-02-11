/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:55:50 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	strtrim_empty(void)
{
	if (!ft_strcmp(ft_strtrim(""), NULL))
		return (0);
	else
		return (-1);
}
