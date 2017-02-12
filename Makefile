# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 05:41:00 by matirell          #+#    #+#              #
#    Updated: 2017/02/12 23:13:15 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a
LIBUNIT = framework
TEST_LIBUNIT = tests
TEST_LIBFT = real_tests

all: $(LIBUNIT)$(NAME)

$(LIBUNIT)$(NAME) :
	@make -C $(LIBUNIT)
	@make -C $(TEST_LIBUNIT)
	@make -C $(TEST_LIBFT)

clean:
	@make clean -C $(LIBUNIT)
	@make clean -C $(TEST_LIBUNIT)
	@make clean -C $(TEST_LIBFT)

fclean: clean
	@make fclean -C $(LIBUNIT)
	@make fclean -C $(TEST_LIBUNIT)
	@make fclean -C $(TEST_LIBFT)

testlibunit:
	@make test -C $(TEST_LIBUNIT)

testlibft:
	@make test -C $(TEST_LIBFT)

test: testlibft testlibunit



re: fclean all
