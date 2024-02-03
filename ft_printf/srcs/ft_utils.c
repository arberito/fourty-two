/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:11:45 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 19:44:12 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getspecifier(char c)
{
	static char	tab[8] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X'};
	int			i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == c)
		{
			return (i);
		}
		i += 1;
	}
	return (-1);
}

int	ft_isformat(const char *s)
{
	return (*s == '%');
}
