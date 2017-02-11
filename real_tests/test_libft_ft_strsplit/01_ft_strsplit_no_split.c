/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_no_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:20:29 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 19:52:58 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

int	no_split(void)
{
	char	**res;

	res = ft_strplsit("abc", ' ');
	if (!ft_strcmp(res[0], "abc") && !res[1])
		return (0);
	else
		return (-1);
}
