/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:08:43 by matirell          #+#    #+#             */
/*   Updated: 2017/02/12 21:09:57 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H
# include <stdlib.h>
# include <string.h>
# include "../includes/libunit.h"

int			ft_strcmp(const char *s1, const char *s2);

int			ft_strlen_launcher(void);
int			ft_strlen_one_char_string(void);
int			ft_strlen_tab_and_spaces(void);
int			ft_strlen_null_string(void);
int			ft_strlen_string_with_null(void);
int			ft_strsplit_launcher(void);
int			ft_strsplit_null_string(void);
int			ft_strsplit_two_words(void);
int			ft_strsplit_many_split(void);
int			ft_strsplit_no_split(void);
int			ft_atoi_null(void);
int			ft_atoi_negative(void);
int			ft_atoi_positive(void);
int			ft_atoi_intmax(void);
int			ft_atoi_chain(void);
int			ft_strtrim_empty(void);
int			ft_strtrim_space_before(void);
int			ft_strtrim_space_after(void);
int			ft_strtrim_space_before_and_after(void);
int			ft_atoi(const char *str);
int			ft_atoi_launcher(void);
int			ft_memcpy_launcher(void);
int			ft_memcpy_easy(void);
int			ft_memcpy_zero(void);
int			ft_memcpy_null(void);
int			ft_memcpy_size(void);
int			ft_memcpy_small(void);
size_t		ft_strlen(const char *str);
char		**ft_strsplit(char const *s, char c);
char		*ft_strtrim(char const *s);
int			ft_strtrim_launcher(void);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t n);
#endif
