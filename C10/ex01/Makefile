# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 19:30:55 by artopall          #+#    #+#              #
#    Updated: 2024/01/28 07:47:53 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Vars
NAME	=	ft_cat
CC		=	cc -Wall -Wextra -Werror -o
FILES	=	main.c ft_print.c ft_cat.c

#	compilation
all		:	$(NAME)

$(NAME)	:	$(FILES)
	$(CC) $(NAME) $(FILES)

clean	:
	rm -rf *.o

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.phony	:	all clean fclean re
