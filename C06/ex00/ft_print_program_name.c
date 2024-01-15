/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_print_program_name.c                         :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:42:13 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 21:43:38 by artopall         #######   #######.qc    */
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

int	main(int ac, char **av)
{
	ft_putstr(av[0]);
	return (0);
}
