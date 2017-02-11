/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_lets_berror.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:21:13 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 09:04:03 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_test.h"

int	lets_berror(void)
{
	int		success;
	char	*s;

	success = 1;
	s = "hello world";
	*s = 'H';
	if (success)
		return (0);
	else
		return (-1);
}
