/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:02:10 by artopall          #+#    #+#             */
/*   Updated: 2024/01/24 11:43:17 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <stdio.h>

void	ft_putstr(char *str);

void	ft_cat(int fd, char *filename, int nb)
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
		ft_putstr("cat: ");
		ft_putstr(filename);
		ft_putstr(": No such file or directory\n");
	}
}
