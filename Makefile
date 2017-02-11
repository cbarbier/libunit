# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 05:41:00 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 21:30:56 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBUNIT = "framework"

all: $(LIBUNIT)$(NAME)

$(LIBUNIT)$(NAME) :
	@make -C $(LIBUNIT)

clean:
	@make clean -C $(LIBUNIT)
	@make clean -C tests
	@make clean -C real_tests
fclean: clean
	@make fclean -C $(LIBUNIT)
	@make fclean -C tests
	@make fclean -C real_tests

re: fclean all
