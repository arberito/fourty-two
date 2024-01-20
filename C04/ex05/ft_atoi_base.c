/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:17:40 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 07:09:56 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlem(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

int	ft_find_n(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			return (i);
		}
		i += 1;
	}
	return (-1);
}

int	ft_checkall(char c, char todo, char *base)
{
	if (todo == 'w')
	{
		return (c == ' ' || (c >= '\t' && c <= '\r'));
	}
	if (todo == 's')
	{
		return (c == '-' || c == '+');
	}
	return (ft_find_n(c, base));
}

int	ft_checkbase(char *base)
{
	int	i;
	int	next;

	i = 0;
	while (base[i])
	{
		if (ft_checkall(base[i], 'w', base) || ft_checkall(base[i], 'w', base))
			return (0);
		i += 1;
	}
	i = 0;
	while (base[i])
	{
		next = i + 1;
		while (base[next])
		{
			if (base[next] == base[i])
				return (0);
			next += 1;
		}
		i += 1;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	if (!ft_checkbase(base))
		return (0);
	while (*str && ft_checkall(*str, 'w', base))
		str += 1;
	while (*str && ft_checkall(*str, 's', base))
	{
		if (*str == '-')
			sign *= -1;
		str += 1;
	}
	while (*str && ft_checkall(*str, 0, base) >= 0)
	{
		nb = nb * ft_strlem(base) + ft_checkall(*str, 0, base);
		str += 1;
	}
	return (nb * sign);
}
