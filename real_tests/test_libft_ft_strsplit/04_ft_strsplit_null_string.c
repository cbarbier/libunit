/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_strsplit_null_string.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:04:53 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 20:41:01 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strsplit_null_string(void)
{
	char	**res;

	res = ft_strsplit(0, '|');
	if (!res)
		return (0);
	else
		return (-1);
}
