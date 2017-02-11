# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 05:41:00 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 06:34:24 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBUNIT = "framework"

all: $(LIBUNIT)$(NAME)

$(LIBUNIT)$(NAME) :
	@make -C $(LIBUNIT)

clean:
	@make clean -C $(LIBUNIT)

fclean: clean
	@make fclean -C $(LIBUNIT)

re: fclean all
