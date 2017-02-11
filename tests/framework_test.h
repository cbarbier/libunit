/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework_test.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:26:18 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 08:32:29 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_TEST_H
# include "../includes/libunit.h"
# define FRAMEWORK_TEST_H

int	framework_launcher(void);
int	basic_test_success(void);
int	basic_test_error(void);
int	lets_segv(void);
int	lets_berror(void);
#endif
