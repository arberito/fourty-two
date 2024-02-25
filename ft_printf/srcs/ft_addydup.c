/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_addydup.c                                  1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/15 20:59:36 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/24 21:01:56 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "ft_printf.h"

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

static char	*ft_strdup2(char *str)
{
	char	*dupe;
	int		i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	dupe = malloc(sizeof(char) * (i + 1));
	if (dupe == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(dupe, str));
}

static int	ft_nblen(unsigned long nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len += 1;
		nbr /= 16;
	}
	return (len);
}

char	*ft_addydup(va_list arg)
{
	int				i;
	unsigned long	num;
	char			*itoa;

	num = va_arg(arg, unsigned long);
	if (num == 0)
		return (ft_strdup2("(nil)"));
	itoa = malloc(sizeof(char) * (ft_nblen(num) + 3));
	i = ft_nblen(num) + 2;
	itoa[i] = 0;
	itoa[0] = '0';
	itoa[1] = 'x';
	while (num)
	{
		itoa[i - 1] = "0123456789abcdef"[num % 16];
		i -= 1;
		num /= 16;
	}
	return (itoa);
}
