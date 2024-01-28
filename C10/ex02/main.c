/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:26:40 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 08:00:59 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	main(int ac, char **av)
{
	int	i;
	int	fd;

	if (ac < 4)
		return (1);
	i = 3;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		ft_tail(fd, av[i], ft_atoi(av[2]));
		i += 1;
	}
	return (0);
}
