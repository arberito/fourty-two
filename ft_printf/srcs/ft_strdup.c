/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_strdup.c                                   1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/15 11:24:03 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/15 18:18:42 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

static char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_strdup(va_list arg)
{
	char	*dupe;
	char	*str;

	str = va_arg(arg, char *);
	dupe = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dupe == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(dupe);
		dupe = malloc(sizeof(char) * (ft_strlen("(null)") + 1));
		return (ft_strcpy(dupe, "(null)"));
	}
	return (ft_strcpy(dupe, str));
}
