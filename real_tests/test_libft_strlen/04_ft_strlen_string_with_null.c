/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_strlen_string_with_null.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:20:19 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 20:43:44 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strlen_string_with_null(void)
{
	int	i;
	int	j;

	i = ft_strlen("hello\0hidden");
	j = ft_strlen("hello\0hidden");
	if (i == j)
		return (0);
	else
		return (-1);
}
