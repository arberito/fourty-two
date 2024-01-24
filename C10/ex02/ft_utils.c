/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:30:02 by artopall          #+#    #+#             */
/*   Updated: 2024/01/25 22:03:45 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_strdup(char *buffer, char *s1)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	dup[0] = 0;
	if (s1 != NULL)
	{
		ft_strcpy(dup, s1);
		free(s1);
	}
	ft_strcpy(dup + ft_strlen(dup), buffer);
	return (dup);
}

int	ft_atoi(char *str)
{
	int	nb;

	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str += 1;
	}
	return (nb);
}
