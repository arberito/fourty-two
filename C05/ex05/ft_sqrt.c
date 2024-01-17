/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_sqrt.c                                       :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:20:55 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/17 07:40:05 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	return (!(nb <= 0 || nb > 46240));
}

int	ft_sqrt(int nb)
{
	int	radicand;

	radicand = 1;
	if (ft_islow(nb) == 0)
	{
		return (0);
	}
	while (radicand * radicand <= nb)
	{
		if (radicand * radicand == nb)
		{
			return (radicand);
		}
		radicand += 1;
	}
	return (0);
}
