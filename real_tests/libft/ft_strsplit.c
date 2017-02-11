/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:29:08 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static int	ft_count_words(char const *s, char c)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (*s)
	{
		if (result == 0 && *s != c)
		{
			result = 1;
			i++;
		}
		else if (result == 1 && *s == c)
			result = 0;
		s++;
	}
	return (i);
}

static int	ft_size(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			count_words;
	int			index;

	if (s)
	{
		index = 0;
		count_words = ft_count_words(s, c);
		tab = (char **)malloc(sizeof(char *) * (count_words + 1));
		if (!tab)
			return (NULL);
		while (count_words--)
		{
			while (*s == c && *s != '\0')
				s++;
			tab[index] = ft_strsub(s, 0, ft_size(s, c));
			if (tab[index] == NULL)
				return (NULL);
			s = s + ft_size(s, c);
			index++;
		}
		tab[index] = NULL;
		return (tab);
	}
	return (NULL);
}
