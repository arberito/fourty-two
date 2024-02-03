/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:57:40 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 09:11:43 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nbr)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		size += 1;
		nbr *= -1;
	}
	while (nbr)
	{
		size += 1;
		nbr /= 10;
	}
	return (size);
}

static char	*ft_islow(int n)
{
	if (n == 0)
	{
		return ("0");
	}
	else
	{
		return ("-2147483648");
	}
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		i;

	if (n == 0 || n == INT_MIN)
	{
		return (ft_strdup(ft_islow(n)));
	}
	itoa = ft_calloc(ft_nbrlen(n) + 1, sizeof(char));
	if (itoa == NULL)
	{
		return (NULL);
	}
	i = ft_nbrlen(n);
	if (n < 0)
	{
		itoa[0] = '-';
		n *= -1;
	}
	while (n)
	{
		itoa[i - 1] = "0123456789"[n % 10];
		i -= 1;
		n /= 10;
	}
	return (itoa);
}
