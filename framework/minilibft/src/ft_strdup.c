/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:52:26 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 01:32:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*ft_strdup(const char *str)
{
	char	*str_dup;
	int		i;

	i = -1;
	str_dup = NULL;
	if (str)
	{
		str_dup = ft_memalloc((ft_strlen(str) + 1) * sizeof(char));
		if (str_dup == NULL)
			return (NULL);
		while (str[++i])
			str_dup[i] = str[i];
		str_dup[i] = '\0';
	}
	return (str_dup);
}
