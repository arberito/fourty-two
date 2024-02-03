# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artopall <artopall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 16:29:29 by artopall          #+#    #+#              #
#    Updated: 2024/02/03 18:15:39 by artopall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vars
SRC		= srcs/
RM		= rm -rf
NAME	= libft.a
INCLUDE	= includes
CC		= cc -Wall -Wextra -Werror

# .c files
FILES	= ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcpy.c ft_memcmp.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strchr.c ft_striteri.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c \
ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_tolower.c
OFILES	= $(FILES:.c=.o)

BFILES	= ft_lstadd_back.c  ft_lstadd_front.c  ft_lstclear.c  ft_lstdelone.c  ft_lstiter.c  ft_lstlast.c  ft_lstmap.c  ft_lstnew.c  ft_lstsize.c
BOFILES	= $(BFILES:.c=.o)

# Compilation
all		: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

bonus	: $(OFILES) $(BOFILES)
	ar -rcs $(NAME) $(OFILES) $(BOFILES)

clean	:
	$(RM) $(OFILES) $(BOFILES)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
