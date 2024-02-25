/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_utils.c                                    1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/15 10:21:43 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/24 21:28:04 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getspecifier(char c)
{
	int	tab[9];
	int	i;

	i = 0;
	tab[0] = '%';
	tab[1] = 'c';
	tab[2] = 's';
	tab[3] = 'p';
	tab[4] = 'd';
	tab[5] = 'i';
	tab[6] = 'u';
	tab[7] = 'x';
	tab[8] = 'X';
	while (i < 9)
	{
		if (tab[i] == c)
		{
			return (i);
		}
		i += 1;
	}
	return (-1);
}

const char	*ft_getformat(t_list *lst, const char *format)
{
	int	index;

	index = ft_getspecifier(*format);
	if (index == 0 && ft_getspecifier(*(format + 1) >= 0))
	{
		index = ft_getspecifier(*(format + 1));
		if (ft_getspecifier(*(format + 1)) == 0)
			lst->len += ft_putchar(*format);
		else if (ft_getspecifier(*(format + 1)) == 1)
			lst->len += ft_putchar(va_arg(lst->ap, int));
		else
			lst->len += ft_putstr(lst->fptr[index](lst->ap));
		format += 2;
	}
	else
	{
		lst->len += ft_putchar(*format);
		format += 1;
	}
	return (format);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i += 1;
	}
	free(str);
	return (i);
}
