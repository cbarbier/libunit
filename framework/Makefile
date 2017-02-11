# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 16:18:31 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 06:30:09 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a
DIR_MINILIBFT = minilibft

FLAG = -Wall -Wextra -Werror

FILE_C = 			ft_list.c ft_tests.c
FILE_MINILIBFT_C = 	ft_memalloc.c ft_memset.c ft_strdup.c ft_strlen.c \
					ft_putstr.c ft_putchar.c ft_putendl.c

DIR=-I ../includes/
DIR_C = src/
DIR_O = objs/

DIR_MINILIBFT_C = $(DIR_MINILIBFT)/$(DIR_C)
DIR_MINILIBFT_O = $(DIR_MINILIBFT)/$(DIR_O)

FILE_O = $(FILE_C:.c=.o)
SRC_C := $(addprefix $(DIR_C), $(FILE_C))
SRC_O := $(addprefix $(DIR_O), $(FILE_O))

FILE_LIBFT_O = $(FILE_MINILIBFT_C:.c=.o)
SRC_LIBFT_C := $(addprefix $(DIR_MINILIBFT_C), $(FILE_MINILIBFT_C))
SRC_LIBFT_O := $(addprefix $(DIR_MINILIBFT_O), $(FILE_LIBFT_O))


all: $(NAME)

$(NAME) :

	@echo "[LIBUNIT] [STEP 1] - CREATING OBJECT FILES FOR LIBUNIT\t\t✓"
	@gcc $(FLAG) -c $(SRC_C) $(DIR)
	@mkdir -p $(DIR_O)
	@mv $(FILE_O) $(DIR_O)

	@echo "[LIBUNIT] [STEP 2] - CREATING OBJECT FILES FOR MINILIBFT\t✓"
	@gcc $(FLAG) -c $(SRC_LIBFT_C) $(DIR)
	@mkdir -p $(DIR_MINILIBFT_O)
	@mv $(FILE_LIBFT_O) $(DIR_MINILIBFT_O)


	@ar rc $(NAME) $(SRC_O) $(SRC_LIBFT_O)
	@echo "[LIBUNIT] [STEP 3] - CREATING NEW LIBRARY\t\t\t✓"
	@ranlib $(NAME)
	@echo "[LIBUNIT] [STEP 4] - FRESH LIBUNIT.A CREATED\t\t\t✓"
	@echo "\n\n"
	@echo " ____            _       _     _ _     _   _ _   _ ___ _____ "
	@echo "|  _ \ _   _ ___| |__   | |   (_) |__ | | | | \ | |_ _|_   _|"
	@echo "| |_) | | | / __| '_ \  | |   | | '_ \| | | |  \| || |  | |  "
	@echo "|  _ <| |_| \__ \ | | | | |___| | |_) | |_| | |\  || |  | |  "
	@echo "|_| \_\\__,_|___/_| |_| |_____|_|_.__/ \___/|_| \_|___| |_| \n\n"
	@echo " Team : cbarbier@student.42.fr - matirell@student.42.fr"
clean:
	@rm -rf $(DIR_O)
	@echo "[LIBUNIT] [STEP 1] - CLEANING LIBUNIT OBJECT FILES\t\t✓"
	@rm -rf $(DIR_MINILIBFT_O)
	@echo "[LIBUNIT] [STEP 2] - CLEANING MINILIBFT OBJECT FILES\t\t✓"

fclean: clean
	@rm -rf $(NAME)
	@echo "[LIBUNIT] - REMOVING LIBUNIT.A ... \t\t\t\t✓"

test: fclean $(NAME)
	gcc $(NAME) main.c -I../includes -o testprog

re: fclean all
