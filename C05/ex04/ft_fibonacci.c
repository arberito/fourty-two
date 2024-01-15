/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_fibonacci.c                                  :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:17:02 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 21:19:08 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

int	ft_islow(int nb)
{
	if (nb == 0)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (-1);
	}
	if (nb == 1)
	{
		return (1);
	}
	return (nb);
}

int	ft_fibonacci(int index)
{
	int	val;

	if (ft_islow(index) <= 1)
	{
		return (ft_islow(index));
	}
	val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (val);
}
