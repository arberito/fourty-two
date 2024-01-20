/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:10:09 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 07:36:58 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb + 1);
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (ft_islow(power) <= 1)
	{
		return (ft_islow(power));
	}
	while (power > 1)
	{
		result *= nb;
		power -= 1;
	}
	return (result);
}
