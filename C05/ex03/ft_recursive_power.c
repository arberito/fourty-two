/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:12:48 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 07:38:09 by artopall         ###   ########.fr       */
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

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (result * ft_recursive_power(result, power - 1));
	}
	else if (ft_islow(power) <= 1)
	{
		return (ft_islow(power));
	}
	return (result);
}
