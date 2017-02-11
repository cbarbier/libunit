/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:52:00 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:12:52 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_tests(char *av, int ac)
{
	if (ac == 1 || !ft_strcmp(av, "ft_strlen"))
		ft_strlen_launcher();
	if (ac == 1 || !ft_strcmp(av, "ft_atoi"))
		ft_atoi_launcher();
	if (ac == 1 || !ft_strcmp(av, "ft_strsplit"))
		ft_strsplit_launcher();
	if (ac == 1 || !ft_strcmp(av, "ft_strtrim"))
		ft_strtrim_launcher();
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	while (av[i])
		ft_tests(av[i++], ac);
	return (0);
}
