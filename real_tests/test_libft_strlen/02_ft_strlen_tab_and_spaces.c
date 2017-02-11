/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strlen_tab_and_spaces.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:19:36 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 20:43:30 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strlen_tab_and_spaces(void)
{
	int		i;
	int		j;

	i = ft_strlen("		1 2 	\t");
	j = strlen("		1 2 	\t");
	if (i == j)
		return (0);
	else
		return (-1);
}
