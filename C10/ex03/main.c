/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:26:25 by artopall          #+#    #+#             */
/*   Updated: 2024/01/30 12:59:48 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		fd;
	char	*final;

	if (argc > 2)
	{
		final = NULL;
		i = 2;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			final = ft_hexdump(fd, argv[i], final);
			i += 1;
		}
		ft_print(final);
		free(final);
	}
	return (0);
}
