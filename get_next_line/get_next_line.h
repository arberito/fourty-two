/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   get_next_line.h                               1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/03 12:17:36 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/15 09:50:49 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char	data[BUFFER_SIZE];
	char	*line;
	char	*rest;
	int		tty;
}	t_list;

//	main function
char	*get_next_line(int fd);

//	main util function
int		ft_isline(char *str);
int		ft_strlen(char *str, char c);
char	*ft_strdup(char *buffer, char *tokeep);
char	*ft_get_line(t_list *lst, char *buffer);
char	*ft_strcpy(char *dst, char *src, int n);

#endif
