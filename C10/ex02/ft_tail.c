/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:26:42 by artopall          #+#    #+#             */
/*   Updated: 2024/01/25 22:04:27 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail(int fd, char *filename, int bytes)
{
	char	*s1;
	int		tty;
	char	buffer[42];

	s1 = NULL;
	if (fd >= 0)
	{
		tty = read(fd, buffer, sizeof(buffer));
		while (tty)
		{
			buffer[tty] = 0;
			s1 = ft_strdup(buffer, s1);
			tty = read(fd, buffer, sizeof(buffer));
		}
		ft_putstr(s1 + (ft_strlen(s1) - bytes));
		free(s1);
	}
	else
	{
		ft_putstr("tail: ");
		ft_putstr(filename);
		ft_putstr(": No such file or directory");
	}
}
