# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matirell <matirell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 05:41:00 by matirell          #+#    #+#              #
#    Updated: 2017/02/11 05:43:37 by matirell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBUNIT = "framework"

all: $(LIBUNIT)$(NAME)

$(LIBUNIT)$(NAME) :
	@make -C $(LIBUNIT)

clean:
	@rm -rf $(DIR_O)
	@echo "[LIBUNIT] - CLEANING LIBFT OBJECT FILES"
	@make clean -C $(LIBUNIT)

fclean: clean
	@rm -rf $(NAME)
	@echo "[LIBUNIT] - CLEANING LIBUNIT.A"
	@make fclean -C $(LIBUNIT)

re: fclean all
