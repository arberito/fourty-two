/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:37:54 by artopall          #+#    #+#             */
/*   Updated: 2024/01/23 23:29:03 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_display_file(char *filename)
{
	char	buffer[42];
	int		fd;
	int		tty;

	fd = open(filename, O_RDONLY);
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
}
