/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:18:14 by artopall          #+#    #+#             */
/*   Updated: 2024/01/21 22:23:07 by artopall         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	
	if (!ft_getsize(min, max))
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * ft_getsize(min, max));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ft_tabcopy(tab, min, max);
	return (ft_getsize(min, max));
}
