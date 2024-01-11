/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_putstr.c                                     :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall <artopall@student.42quebec.com     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/09 13:41:02 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/09 13:41:37 by artopall         #######   #######.qc    */
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
		ft_putchar(str);
		str += 1;
	}
}