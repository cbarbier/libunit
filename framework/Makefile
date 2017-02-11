# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 16:18:31 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 02:55:19 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

FLAG = -Wall -Wextra -Werror

DIR=-I ../includes/

DIR_C = ./src/

DIR_O = ./objs/

FILE_C = ft_list.c ft_tests.c

FILE_O = $(FILE_C:.c=.o)

SRC_C := $(addprefix $(DIR_C), $(FILE_C))

SRC_O := $(addprefix $(DIR_O), $(FILE_O))

MINILIBFT = minilibft

all: $(NAME)

$(NAME) :
	@echo "[LIBUNIT] [STEP 1] - CREATING OBJECT FILES"
	@gcc $(FLAG) -c $(SRC_C) $(DIR)
	@mkdir -p $(DIR_O)
	@mv $(FILE_O) $(DIR_O)
	@ar rc $(NAME) $(SRC_O)
	@ranlib $(NAME)
	@echo "[LIBUNIT] [STEP 2] - FRESH LIBUNIT.A CREATED"
	@make -C $(MINILIBFT)

clean:
	@rm -rf $(DIR_O)
	@echo "[LIBUNIT] - CLEANING LIBFT OBJECT FILES"
	@make clean -C $(MINILIBFT)

fclean: clean
	@rm -rf $(NAME)
	@echo "[LIBUNIT] - CLEANING LIBUNIT.A"
	@make fclean -C $(MINILIBFT)

test: fclean $(NAME)
	gcc libunit.a minilibft/minilibft.a main.c -I../includes -o testprog

re: fclean all
