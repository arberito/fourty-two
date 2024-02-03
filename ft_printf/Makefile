# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 16:40:24 by artopall          #+#    #+#              #
#    Updated: 2024/02/03 13:39:32 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vars
SRC		= srcs/
RM		= rm -rf
INCLUDE	= includes
NAME	= libftprintf.a
CC		= cc -Wall -Wextra -Werror -I./$(INCLUDE)

FILES	= $(SRC)ft_printf.c $(SRC)ft_utils.c $(SRC)ft_putchar.c $(SRC)ft_putnbr.c
OFILES	= $(FILES:.c=.o)

# Compilation
all		: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean	:
	$(RM) $(OFILES)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
