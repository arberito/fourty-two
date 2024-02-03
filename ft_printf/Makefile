# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 16:40:24 by artopall          #+#    #+#              #
#    Updated: 2024/02/02 19:54:28 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vars
SRC		= srcs/
RM		= rm -rf
INCLUDE	= includes
PROJECT	= libftprintf.a
CC		= cc -Wall -Wextra -Werror -I./$(INCLUDE)

FILES	= $(SRC)ft_printf.c $(SRC)ft_utils.c $(SRC)ft_putchar.c $(SRC)ft_putnbr.c
OFILES	= $(FILES:.c=.o)

# Compilation
all		: $(PROJECT)

$(PROJECT): $(OFILES)
	ar -rcs $(PROJECT) $(OFILES)

clean	:
	$(RM) $(OFILES)

fclean	: clean
	$(RM) $(PROJECT)

re		: fclean all

.PHONY	: all clean fclean re
