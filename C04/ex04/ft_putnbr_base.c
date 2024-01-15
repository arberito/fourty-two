/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_putnbr_base.c                                :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 16:42:33 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 17:11:23 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

int	ft_checkbase(char *str)
{
	int	tab[127];
	int	i;

	i = 0;
	if (ft_strlen(str) <= 1)
	{
		return (0);
	}
	while (i < 127)
	{
		tab[i] = 0;
		i += 1;
	}
	while (*str)
	{
		if (tab[*str] == 2)
			return (0);
		if (*str == '-' || *str == '+')
			return (0);
		tab[*str] += 1;
		str += 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_checkbase(base) == 0)
	{
		return ;
	}
	if (nbr == -2147483648)
	{
		ft_putchar(base[2 % ft_strlen(base)]);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	ft_putchar(base[nbr % ft_strlen(base)]);
}
