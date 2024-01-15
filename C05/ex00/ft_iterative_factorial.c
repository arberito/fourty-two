/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_iterative_factorial.c                        :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 20:53:03 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 21:06:06 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	if (nb == 1)
	{
		return (1);
	}
	if (nb <= 0)
	{
		return (0);
	}
	return (nb);
}

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (ft_islow(nb) <= 1)
	{
		return (ft_islow(nb));
	}
	while (nb > 0)
	{
		result *= nb;
		nb -= 1;
	}
	return (result);
}
