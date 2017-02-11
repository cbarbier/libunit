# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 16:18:31 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 05:15:07 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minilibft.a

FLAG = -Wall -Wextra -Werror

DIR=-I ../../includes/

DIR_C = ./src/

DIR_O = ./objs/

FILE_C = 	ft_memalloc.c ft_memset.c ft_strdup.c ft_strlen.c \
			ft_putstr.c ft_putchar.c ft_putendl.c

FILE_O = $(FILE_C:.c=.o)

SRC_C := $(addprefix $(DIR_C), $(FILE_C))

SRC_O := $(addprefix $(DIR_O), $(FILE_O))

all: $(NAME)

$(NAME) :
	@echo "[MINILIBFT] [STEP 1] - CREATING OBJECT FILES"
	@gcc $(FLAG) -c $(SRC_C) $(DIR)
	@mkdir -p $(DIR_O)
	@mv $(FILE_O) $(DIR_O)
	@ar rc $(NAME) $(SRC_O)
	@ranlib $(NAME)
	@echo "[MINILIBFT] [STEP 2] - FRESH MINILIBFT.A CREATED"

clean:
	@rm -rf $(DIR_O)
	@echo "[MINILIBFT] - CLEANING LIBFT OBJECT FILES"
fclean: clean
	@rm -rf $(NAME)
	@echo "[MINILIBFT] - CLEANING LIBFT.A"

re: fclean all
