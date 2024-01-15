/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_ultimate_range.c                             :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 22:19:13 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/15 07:31:10 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_rangelen(int min, int max)
{
	if (min >= max)
	{
		return (0);
	}
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (ft_rangelen(min, max) == 0)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int *) * (max - min) + 1);
	if (tab == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		tab[i] = min;
		i += 1;
		min += 1;
	}
	*range = tab;
	return (i);
}
