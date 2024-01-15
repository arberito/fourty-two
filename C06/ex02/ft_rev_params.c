/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_rev_params.c                                 :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:48:18 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 21:49:40 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str += 1;
	}
}

void	ft_getstr(char **tab, int size)
{
	size -= 1;
	while (size > 0)
	{
		ft_putstr(tab[size]);
		ft_putchar('\n');
		size -= 1;
	}
}

int	main(int ac, char **av)
{
	ft_getstr(av, ac);
	return (0);
}
