/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:35:52 by artopall          #+#    #+#             */
/*   Updated: 2024/01/18 22:42:42 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
	{
		str += 1;
	}
	while (*str && ft_issign(*str))
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str += 1;
	}
	while (*str && ft_isdigit(*str))
	{
		nb = nb * 10 + (*str - '0');
		str += 1;
	}
	return (nb * sign);
}
