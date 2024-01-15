/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_iterative_power.c                            :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:10:09 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 21:11:57 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb);
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
