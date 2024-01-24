/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:55:04 by artopall          #+#    #+#             */
/*   Updated: 2024/01/21 22:16:51 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_tabcopy(int *tab, int min, int max)
{
	int	index;

	index = 0;
	while (min < max)
	{
		tab[index] = min;
		index += 1;
		min += 1;
	}
	return (tab);
}

int	ft_getsize(int min, int max)
{
	return ((min < max) * (max - min));
}

int	*ft_range(int min, int max)
{
	int	*tab;

	if (!ft_getsize(min, max))
		return (NULL);
	tab = (int *)malloc(sizeof(int) * ft_getsize(min, max));
	if (!tab)
	{
		return (NULL);
	}
	return (ft_tabcopy(tab, min, max));
}
