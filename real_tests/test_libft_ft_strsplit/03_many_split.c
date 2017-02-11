/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_two_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:20:29 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:04:23 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

int	two_words(void)
{
	char	**res;

	res = ft_strsplit("abc|def|ghi|jkl|m|n|o|pq||||", '|');
	if (!ft_strcmp(res[0], "abc")
		&& !ft_strcmp(res[1], "def")
		&& !ft_strcmp(res[2], "ghi")
		&& !ft_strcmp(res[3], "jkl")
		&& !ft_strcmp(res[4], "m")
		&& !ft_strcmp(res[5], "m")
		&& !ft_strcmp(res[6], "m")
		&& !ft_strcmp(res[7], "m")
		&& !res[8])
		return (0);
	else
		return (-1);
}
