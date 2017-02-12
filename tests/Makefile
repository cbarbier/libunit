# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 08:49:49 by matirell          #+#    #+#              #
#    Updated: 2017/02/12 22:26:55 by cbarbier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myframeworktest

DIR = framework-tests/
OBJ = obj/
HDR = framework_test.h

FILES = 00_launcher.c 01_basic_test_success.c 02_basic_test_error.c \
		03_lets_segv.c 04_lets_berror.c 05_lets_timeout.c 06_lets_abort.c

COMPILER = clang
FLAGS = -W -Wall -Wextra -Werror

FILE_O = $(FILES:.c=.o)
SRC_C := $(addprefix $(DIR), $(FILES))
SRC_O := $(addprefix $(OBJ), $(FILE_O))

UNITEST_LIB = ../framework/libunit.a
MAIN_TEST = main.c
INCLUDES = -I../includes

all: $(NAME)

$(NAME) :
	-@test ! -f $(LIB_FRAMEWORK) && make -C ../framework || true
	@echo "[$(NAME)] EXECUTABLE HAS BEEN CREATED\t\t\033[0;32m✓\033[0m"
	$(COMPILER) $(FLAGS) $(SRC_C) $(MAIN_TEST) $(UNITEST_LIB) $(INCLUDES) -o $(NAME)

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
