# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 20:17:28 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 20:31:46 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TESTS = test_libft_atoi/00_launcher_libft_atoi.c \
		test_libft_atoi/01_simple_null.c \
		test_libft_atoi/02_simple_negative.c \
		test_libft_atoi/03_simple_positive.c \
		test_libft_atoi/04_simple_intmax.c \
		test_libft_atoi/05_invalid_chain.c \
		test_libft_strlen/00_launcher_libft_strlen.c \
		test_libft_strlen/01_one_char_string.c \
		test_libft_strlen/02_tab_and_spaces.c \
		test_libft_strlen/03_null_string.c \
		test_libft_strlen/04_string_with_null.c \
		test_libft_ft_strsplit/00_launcher_libft_strsplit.c \
		test_libft_ft_strsplit/01_no_split.c \
		test_libft_ft_strsplit/02_two_words.c \
		test_libft_ft_strsplit/03_many_split.c \
		test_libft_ft_strsplit/04_null_string.c \
		test_libft_strtrim/00_launcher_libft_strtrim.c \
		test_libft_strtrim/01_empty_string.c \
		test_libft_strtrim/02_strtrim_space_before.c \
		test_libft_strtrim/03_strtrim_space_after.c \
		test_libft_strtrim/04_strtrim_space_before_and_after.c \

FILES = main.c ft_strcmp.c





		all: $(NAME)

		$(NAME) :

			@echo "[LIBUNIT] [STEP 1] - CREATING OBJECT FILES FOR LIBUNIT\t\t\033[0;32m✓\033[0m"
			@gcc $(FLAG) -c $(SRC_C) $(DIR)
			@mkdir -p $(DIR_O)
			@mv $(FILE_O) $(DIR_O)

			@echo "[LIBUNIT] [STEP 2] - CREATING OBJECT FILES FOR MINILIBFT\t\033[0;32m✓\033[0m"
			@gcc $(FLAG) -c $(SRC_LIBFT_C) $(DIR)
			@mkdir -p $(DIR_MINILIBFT_O)
			@mv $(FILE_LIBFT_O) $(DIR_MINILIBFT_O)


			@ar rc $(NAME) $(SRC_O) $(SRC_LIBFT_O)
			@echo "[LIBUNIT] [STEP 3] - CREATING NEW LIBRARY\t\t\t\033[0;32m✓\033[0m"
			@ranlib $(NAME)
			@echo "[LIBUNIT] [STEP 4] - FRESH LIBUNIT.A CREATED\t\t\t\033[0;32m✓\033[0m"
			@echo "\n\n"
			@echo " ____            _       _     _ _     _   _ _   _ ___ _____ "
			@echo "|  _ \ _   _ ___| |__   | |   (_) |__ | | | | \ | |_ _|_   _|"
			@echo "| |_) | | | / __| '_ \  | |   | | '_ \| | | |  \| || |  | |  "
			@echo "|  _ <| |_| \__ \ | | | | |___| | |_) | |_| | |\  || |  | |  "
			@echo "|_| \_\\__,_|___/_| |_| |_____|_|_.__/ \___/|_| \_|___| |_| \n\n"
			@echo " Team : \033[0;31mcbarbier@student.42.fr\033[0m - \
			\033[0;31mmatirell@student.42.fr\033[0m\n\n\n"
		clean:
			@rm -rf $(DIR_O)
			@echo "[LIBUNIT] [STEP 1] - CLEANING LIBUNIT OBJECT FILES\t\t\033[0;32m✓\033[0m"
			@rm -rf $(DIR_MINILIBFT_O)
			@echo "[LIBUNIT] [STEP 2] - CLEANING MINILIBFT OBJECT FILES\t\t\033[0;32m✓\033[0m"

		fclean: clean
			@rm -rf $(NAME)
			@echo "[LIBUNIT] - REMOVING LIBUNIT.A ... \t\t\t\t\033[0;32m✓\033[0m"

		re: fclean all
