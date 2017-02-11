/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_error.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:20:43 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 08:37:48 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_test.h"

int	basic_test_error(void)
{
	int	success;

	success = 0;
	if (success == 1)
		return (0);
	else
		return (-1);
}
