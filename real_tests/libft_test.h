/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:08:43 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:13:13 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H
# include <stdlib.h>
# include <string.h>

int			ft_strcmp(const char *s1, const char *s2);
int			ft_strlen_launcher(void);
int			ft_strlen_one_char_string(void);
int			ft_strlen_tab_and_spaces(void);
int			ft_strlen_null_string(void);
int			ft_strlen_string_with_null(void);
int			ft_strsplit_launcher(void);
int			ft_strsplit_null_string(void);
int			ft_strsplit_two_words(void);
int			ft_strsplit_many_words(void);
int			ft_strsplit_no_split(void);

#endif
