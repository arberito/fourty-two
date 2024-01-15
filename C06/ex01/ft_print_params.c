/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_print_params.c                               :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:43:58 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 21:47:33 by artopall         #######   #######.qc    */
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
	int	i;

	i = 1;
	if (size < 2)
	{
		return ;
	}
	while (i < size)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i += 1;
	}
}

int	main(int ac, char **av)
{
	ft_getstr(av, ac);
	return (0);
}
