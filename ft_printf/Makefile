# **************************************************************************** #
#                                                                              #
#                                                  -- ··················       #
#    Makefile                                      1- :██╗  ██╗██████╗ :       #
#                                                  0- :██║  ██║╚════██╗:       #
#    By: artopall | github/arberito                1- :███████║ █████╔╝:       #
#                                                  0- :╚════██║██╔═══╝ :       #
#    Created: 2024/02/15 10:01:30 by artopall      1- :     ██║███████╗:       #
#    Updated: 2024/02/25 08:34:20 by artopall      0- :     ╚═╝╚══════╝.qc     #
#                                                  -- ··················       #
# **************************************************************************** #

# Vars
SRC		= srcs/
RM		= rm -rf
INCLUDE	= includes
NAME	= libftprintf.a
CCF		= cc -Wall -Wextra -Werror -I./$(INCLUDE)

# .c files
OFILES	= $(FILES:.c=.o)
FILES	= $(SRC)ft_printf.c $(SRC)ft_utils.c \
$(SRC)ft_strdup.c $(SRC)ft_intdup.c $(SRC)ft_uintdup.c $(SRC)ft_addydup.c $(SRC)ft_hexdup.c $(SRC)ft_uphexadup.c 

# Compilation
all		: $(NAME)

$(NAME)	: $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean	:
	$(RM) $(OFILES)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
