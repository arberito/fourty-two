/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:07:01 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 07:20:52 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	return (nb);
}

int	ft_recursive_factorial(int nb)
{
	if (ft_islow(nb) <= 1)
	{
		return (ft_islow(nb));
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
