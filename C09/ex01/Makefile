# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 21:11:46 by artopall          #+#    #+#              #
#    Updated: 2024/01/28 07:53:35 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Vars
NAME	=	libft.a

CC		=	cc -Wall -Wextra -Werror -c -Iinclude/
AR RC	=	ar -rc

SRCS	=	srcs/
INC		=	includes/ft.h

FILES	=	$(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c $(SRCS)ft_strlen.c $(SRCS)ft_swap.c
OBJS	=	$(FILES:.c=.o)

#	compilation
all		:	$(NAME)

$(NAME)	:	$(OBJS)
	ar -rc $(NAME) $(OBJS)

clean	:
	rm -rf	$(OBJS)

fclean	:
	rm -r	$(NAME)

re		: fclean all

.PHONY: all clean fclean re
