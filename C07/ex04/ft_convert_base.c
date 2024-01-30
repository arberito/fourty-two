/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:58:23 by artopall          #+#    #+#             */
/*   Updated: 2024/01/30 07:50:51 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int nbr, char *base);

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

int	ft_checkbase(char *base)
{
	int	i;
	int	next;

	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		next = i + 1;
		while (base[next])
		{
			if (base[i] == base[next])
				return (0);
			next += 1;
		}
		i += 1;
	}
	return (ft_strlen(base) > 1);
}

int	ft_getdigit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i += 1;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	if (*nbr == '-')
	{
		sign = -1;
		nbr += 1;
	}
	while (*nbr && *nbr >= '0' && *nbr <= '9')
	{
		nb = nb * ft_strlen(base) + (ft_getdigit(*nbr, base));
		nbr += 1;
	}
	return (nb * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_checkbase(base_from) || !ft_checkbase(base_to))
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
