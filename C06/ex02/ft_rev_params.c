/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:48:18 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 20:02:49 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_getstr(char **tab, int size)
{
	size -= 1;
	while (size > 0)
	{
		ft_putstr(tab[size]);
		ft_putstr("\n");
		size -= 1;
	}
}

int	main(int ac, char **av)
{
	ft_getstr(av, ac);
	return (0);
}
