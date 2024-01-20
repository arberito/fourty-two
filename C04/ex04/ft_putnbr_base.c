/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:42:33 by artopall          #+#    #+#             */
/*   Updated: 2024/01/18 23:06:48 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isprint(char c)
{
	if (c == '-' || c == '+')
	{
		return (0);
	}
	if (c > ' ' && c <= 126)
	{
		return (1);
	}
	return (0);
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
		if (tab[(int)*str] == 2)
			return (0);
		if (ft_isprint(*str) == 0)
			return (0);
		tab[(int)*str] += 1;
		str += 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	copy;

	copy = nbr;
	if (ft_checkbase(base) == 0)
	{
		return ;
	}
	if (copy < 0)
	{
		ft_putchar('-');
		copy *= -1;
	}
	if (copy >= ft_strlen(base))
	{
		ft_putnbr_base(copy / ft_strlen(base), base);
	}
	ft_putchar(base[copy % ft_strlen(base)]);
}
