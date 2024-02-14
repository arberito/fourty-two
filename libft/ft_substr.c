/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_substr.c                                   1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/03 08:18:15 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/13 13:05:27 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	if (s == NULL)
	{
		return (NULL);
	}
	if ((unsigned int)ft_strlen(s) < start)
	{
		len = 0;
		start = 0;
	}
	if ((size_t)ft_strlen(s + start) < len)
	{
		len = (size_t)ft_strlen(s + start);
	}
	return (ft_memcpy(ft_calloc(len + 1, 1), s + start, len));
}
