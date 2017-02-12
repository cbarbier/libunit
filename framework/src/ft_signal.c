/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 19:38:25 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/12 19:42:07 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		ft_putsignal(t_unit_test *tmp)
{
		ft_putstr("\t: \t[");
		if (!tmp->ret)
			ft_putstr("\033[0;32mOK\033[0m");
		else if (tmp->signal == SIGSEGV)
			ft_putstr("\033[0;33mSEGV\033[0m");
		else if (tmp->signal == SIGBUS)
			ft_putstr("\033[0;36mBUSE\033[0m");
		else if (tmp->signal == SIGALRM)
			ft_putstr("\033[0;36mTIMEOUT\033[0m");
		else
			ft_putstr("\033[0;31mKO\033[0m");
		ft_putendl("]");
}
