# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 08:49:49 by matirell          #+#    #+#              #
#    Updated: 2017/02/12 19:21:00 by matthieutirelli  ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myframeworktest

DIR = framework-tests/
OBJ = obj/
LIB = framework-tests.a

FILES = 00_launcher.c 01_basic_test_success.c 02_basic_test_error.c \
		03_lets_segv.c 04_lets_berror.c

COMPILER = clang
FLAGS = -W -Wall -Wextra -Werror

FILE_O = $(FILES:.c=.o)
SRC_C := $(addprefix $(DIR), $(FILES))
SRC_O := $(addprefix $(OBJ), $(FILE_O))

UNITEST_LIB = ../framework/libunit.a
MAIN_TEST = main.c
INCLUDES = -L../includes

all: $(NAME)

$(NAME) :
	-@test ! -f $(LIB_FRAMEWORK) && make -C ../framework || true
	@echo "[$(NAME)] EXECUTABLE HAS BEEN CREATED\t\t\033[0;32m✓\033[0m"
	@$(COMPILER) $(FLAGS) -c $(SRC_C)
	@mkdir -p $(OBJ)
	@mv $(FILE_O) $(OBJ)
	@ar rc $(LIB) $(SRC_O)
	@$(COMPILER) $(FLAGS) $(MAIN_TEST) $(UNITEST_LIB) $(LIB) $(INCLUDES) -o $(NAME)
	@rm $(LIB)

clean:
	@rm -rf $(OBJ)
	@echo "[TESTS/FRAMEWORK] - CLEANING OBJECTS FILES \t\t\033[0;32m✓\033[0m"
fclean: clean
	@rm -rf $(NAME)
	@echo "[$(NAME)] REMOVING EXECUTABLE\t\t\t\033[0;32m✓\033[0m"

test: $(NAME)
	@echo "[$(NAME)] - STARTING TESTS \t\t\033[0;32m✓\033[0m"
	-@./$(NAME) || true

re: fclean all

.PHONY: all clean fclean test re
