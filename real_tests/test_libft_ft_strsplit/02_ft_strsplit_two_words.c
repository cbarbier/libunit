/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strsplit_two_words.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:20:29 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:52:19 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strsplit_two_words(void)
{
	char	**res;

	res = ft_strsplit("abci def  ", ' ');
	if (!ft_strcmp(res[0], "abc") && !ft_strcmp(res[1], "def") && !res[2])
		return (0);
	else
		return (-1);
}
