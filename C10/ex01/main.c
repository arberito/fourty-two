/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:16:55 by artopall          #+#    #+#             */
/*   Updated: 2024/01/24 09:20:18 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>

void	ft_cat(int fd, char *filename);

int	main(int argc, char *argv[])
{
	int	i;
	int	fd;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ft_cat(fd, argv[i]);
		i += 1;
	}
	return (0);
}
