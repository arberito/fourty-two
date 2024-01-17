/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_putstr_non_printable.c                       :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/11 00:26:20 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/16 13:42:25 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	ft_putchar("0123456789abcdef"[nb / 16]);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_isprint(*str))
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putnbr(*str);
		}
		str += 1;
	}
}
