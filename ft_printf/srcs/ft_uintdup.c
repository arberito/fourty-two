/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_uintdup.c                                  1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/15 18:28:25 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/24 21:22:50 by artopall      0- :     ╚═╝╚══════╝.qc    */
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

static char	*ft_islow(int nbr)
{
	if (nbr == 0)
	{
		return ("0");
	}
	return ("-2147483648");
}

static int	ft_nblen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}

char	*ft_uintdup(va_list arg)
{
	int				i;
	char			*itoa;
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		return (ft_strdup2(ft_islow(num)));
	}
	itoa = malloc(sizeof(char) * (ft_nblen(num) + 1));
	i = ft_nblen(num);
	itoa[i] = 0;
	while (num)
	{
		itoa[i - 1] = "0123456789"[num % 10];
		i -= 1;
		num /= 10;
	}
	return (itoa);
}
