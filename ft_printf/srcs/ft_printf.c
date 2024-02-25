/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_printf.c                                   1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/15 10:05:29 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/24 21:29:11 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_list	lst;

	lst.len = 0;
	va_start(lst.ap, format);
	lst.fptr[2] = ft_strdup;
	lst.fptr[3] = ft_addydup;
	lst.fptr[4] = ft_intdup;
	lst.fptr[5] = ft_intdup;
	lst.fptr[6] = ft_uintdup;
	lst.fptr[7] = ft_hexadup;
	lst.fptr[8] = ft_uphexadup;
	while (*format)
	{
		format = ft_getformat(&lst, format);
	}
	va_end(lst.ap);
	return (lst.len);
}
