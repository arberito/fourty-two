# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 09:26:34 by artopall          #+#    #+#              #
#    Updated: 2024/01/30 09:51:26 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Vars
NAME	=	ft_hexdump
CC		=	cc -Wall -Wextra -Werror
FILES	=	main.c ft_hexdump.c ft_utils.c

#	compilation
all		:	$(NAME)

$(NAME)	:	$(FILES)
	$(CC) -o $(NAME) $(FILES)

clean	:
	rm -rf *.o

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.phony	:	all clean fclean re
