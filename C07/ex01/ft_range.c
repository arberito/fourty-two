/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_range.c                                      :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 22:12:45 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 22:17:06 by artopall         #######   #######.qc    */
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

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (ft_rangelen(min, max) == 0)
	{
		return (NULL);
	}
	range = malloc(sizeof(int) * (max - min) + 1);
	if (range == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		range[i] = min;
		i += 1;
		min += 1;
	}
}
