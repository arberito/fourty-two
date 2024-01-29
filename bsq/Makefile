# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 22:04:26 by artopall          #+#    #+#              #
#    Updated: 2024/01/28 22:33:56 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vars

NAME	=	bsq
CC		=	cc -Wall -Wextra -Werror
RM		=	rm -rf
SRCS	=	main.c ft_utils.c ft_cat.c
OFILES	=	$(SRCS:.c=.o)

# Compilation
all		:	$(NAME)

$(NAME)	:	$(OFILES)
	$(CC) -o $(NAME) $(OFILES)

clean	:
	$(RM) $(OFILES)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
