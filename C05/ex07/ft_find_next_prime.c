/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:01:44 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 11:48:59 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	return (nb <= 1);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (ft_islow(nb))
	{
		return (0);
	}
	while (nb % i != 0)
	{
		i += 1;
	}
	return (i == nb);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
	{
		return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}
