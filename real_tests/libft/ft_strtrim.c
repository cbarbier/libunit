/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 22:33:27 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	c = 0;
	b = ft_strlen(s);
	while ((s[a] == ' ') || (s[a] == '\n') || (s[a] == '\t'))
		a++;
	while (((s[b - 1] == ' ') || (s[b - 1] == '\n') || (s[b - 1] == '\t')) && \
			(a != b))
		b--;
	tmp = (char *)malloc(sizeof(char) * ((b - a) + 1));
	if (!tmp)
		return (NULL);
	while (b - (c + a))
	{
		tmp[c] = s[a + c];
		c++;
	}
	tmp[c] = '\0';
	return (tmp);
}
