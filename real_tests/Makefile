# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 20:17:28 by matirell          #+#    #+#              #
#    Updated: 2017/02/12 19:22:28 by matthieutirelli  ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_libft_test

TESTS = test_libft_atoi/00_launcher_libft_atoi.c \
		test_libft_atoi/01_simple_null.c \
		test_libft_atoi/02_simple_negative.c \
		test_libft_atoi/03_simple_positive.c \
		test_libft_atoi/04_simple_intmax.c \
		test_libft_atoi/05_invalid_chain.c \
		test_libft_strlen/00_launcher_libft_strlen.c \
		test_libft_strlen/01_ft_strlen_one_char_string.c \
		test_libft_strlen/02_ft_strlen_tab_and_spaces.c \
		test_libft_strlen/03_ft_strlen_null_string.c \
		test_libft_strlen/04_ft_strlen_string_with_null.c \
		test_libft_ft_strsplit/00_launcher_libft_strsplit.c \
		test_libft_ft_strsplit/01_ft_strsplit_no_split.c \
		test_libft_ft_strsplit/02_ft_strsplit_two_words.c \
		test_libft_ft_strsplit/03_ft_strsplit_many_split.c \
		test_libft_ft_strsplit/04_ft_strsplit_null_string.c \
		test_libft_strtrim/00_launcher_libft_strtrim.c \
		test_libft_strtrim/01_empty_string.c \
		test_libft_strtrim/02_strtrim_space_before.c \
		test_libft_strtrim/03_strtrim_space_after.c \
		test_libft_strtrim/04_strtrim_space_before_and_after.c
LIBFT_TEST =	libft/ft_atoi.c \
				libft/ft_strlen.c \
				libft/ft_strsplit.c \
				libft/ft_strsub.c \
				libft/ft_strtrim.c \
				libft/ft_strcmp.c

LIB_FRAMEWORK = ../framework/libunit.a
FILES = main.c
INC = -I .
COMPILER = clang
FLAGS = -W -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
		-@test ! -f $(LIB_FRAMEWORK) && make -C ../framework || true
		@echo "[$(NAME)] EXECUTABLE HAS BEEN CREATED\t\t\033[0;32m✓\033[0m"
		@$(COMPILER) $(FILES) $(FLAGS) $(TESTS) $(LIBFT_TEST) $(LIB_FRAMEWORK) $(INC) -o $(NAME)

clean:
	@echo "[$(NAME)] NO OBJECT FILES IN THIS PROJECT\t\t\033[0;32m✓\033[0m"
	@echo "[$(NAME)] CLEAN DONE\t\t\t\t\033[0;32m✓\033[0m"

fclean: clean
	@echo "[$(NAME)] REMOVING EXECUTABLE\t\t\t\033[0;32m✓\033[0m"
	@rm -rf $(NAME)
	@echo "[$(NAME)] FCLEAN DONE\t\t\t\t\033[0;32m✓\033[0m"

re: fclean all

test: $(NAME)
	@echo "[$(NAME)] - STARTING TESTS \t\t\033[0;32m✓\033[0m"
	-@./$(NAME) || true
