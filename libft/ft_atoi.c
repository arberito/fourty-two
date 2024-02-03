/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:04:34 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 00:08:24 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	while (ft_isspace(*str))
	{
		str += 1;
	}
	while (ft_issign(*str))
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str += 1;
	}
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + *str - '0';
		str += 1;
	}
	return (nb * sign);
}
