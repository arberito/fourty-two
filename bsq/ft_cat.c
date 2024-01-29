/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:22:57 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 22:32:56 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_cat(int fd)
{
	char	buffer[42];
	int		tty;

	if (fd >= 0)
	{
		tty = read(fd, buffer, 42);
		while (tty)
		{
			buffer[tty] = 0;
			ft_putstr(buffer);
			tty = read(fd, buffer, 42);
		}
		close(fd);
	}
	else
	{
		ft_putstr("Map Error\n");
	}
}
