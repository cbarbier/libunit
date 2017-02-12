/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:01:05 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 19:42:23 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <sys/wait.h>

typedef struct			s_unit_test
{
	char				*name;
	int					signal;
	int					ret;
	int					(**ft)();
	struct s_unit_test	*next;
}						t_unit_test;

typedef	struct			s_unit
{
	struct s_unit_test	*head;
	struct s_unit_test	*cur;
	int					returnval;
}						t_unit;

void					ft_init(t_unit_test **head, t_unit_test **cur);
void					load_test(t_unit *tests, char *testname, int (**ft)());
int						ft_execute_tests(t_unit *tests);
void					*ft_memset(void *str, int c, size_t n);
void					ft_putstr(char *str);
void					ft_putchar(char c);
void					ft_putendl(char const *str);
void					*ft_memalloc(size_t size);
char					*ft_strdup(const char *str);
size_t					ft_strlen(const char *str);
void					ft_putnbr(int nbr);
int						ft_display_resume(t_unit *tests, int verbose);
int						ft_putsignal(t_unit_test *tmp);
#endif
