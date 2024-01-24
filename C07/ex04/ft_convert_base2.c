/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:58:20 by artopall          #+#    #+#             */
/*   Updated: 2024/01/22 07:07:47 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checkbase(char *base);
int	ft_strlen(char *str);

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str) - 1;
	i = 0;
	if (str[i] == '-')
		i += 1;
	while (i < len)
	{
		ft_swap(&str[i], &str[len]);
		i += 1;
		len -= 1;
	}
	return (str);
}

int	ft_nbelen(int nbr, char *base)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= ft_strlen(base);
		i += 1;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * ft_nbelen(nbr, base) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		str[i] = '-';
		i += 1;
	}
	while (nbr > 0)
	{
		str[i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i += 1;
	}
	str[i] = 0;
	return (ft_strrev(str));
}
