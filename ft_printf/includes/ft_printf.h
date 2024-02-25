/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_printf.h                                   1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/15 10:02:54 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/24 21:18:30 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_list
{
	va_list	ap;
	int		len;
	char	*(*fptr[9])(va_list);
}	t_list;

// Main func
int			ft_printf(const char *format, ...);

// Ft_utils
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_getspecifier(char c);
const char	*ft_getformat(t_list *lst, const char *format);

// Function pointer
char		*ft_strdup(va_list arg);
char		*ft_intdup(va_list arg);
char		*ft_addydup(va_list arg);
char		*ft_uintdup(va_list arg);
char		*ft_hexadup(va_list arg);
char		*ft_uphexadup(va_list arg);

#endif
