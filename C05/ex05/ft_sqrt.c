/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:20:55 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 07:49:38 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	return (nb <= 0);
}

int	ft_sqrt(int nb)
{
	int	radicand;

	radicand = 1;
	if (ft_islow(nb))
	{
		return (0);
	}
	while (radicand * radicand <= nb)
	{
		if (radicand * radicand == nb)
		{
			return (radicand);
		}
		if (radicand > 46340)
		{
			return (0);
		}
		radicand += 1;
	}
	return (0);
}
