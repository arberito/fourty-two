/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:24:25 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 12:52:57 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*tokeep = NULL;
	t_list		list;

	if (fd >= 0)
	{
		list.tty = read(fd, list.data, BUFFER_SIZE);
		while (list.tty > 0)
		{
			list.data[list.tty] = 0;
			tokeep = ft_strdup(list.data, tokeep);
			list.tty = read(fd, list.data, BUFFER_SIZE);
		}
	}
	return (tokeep);
}
