/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_strlen_null_string.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:19:17 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 20:43:37 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strlen_null_string(void)
{
	if (ft_strlen(0) == strlen(0))
		return (0);
	else
		return (-1);
}
