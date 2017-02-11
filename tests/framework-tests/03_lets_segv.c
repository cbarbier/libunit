/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_lets_segv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:21:15 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 08:37:52 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_test.h"

int	lets_segv(void)
{
	int		success;
	char	*test;

	test = NULL;
	*test = 1;
	success = 1;
	if (success == 1)
		return (0);
	else
		return (-1);
}
