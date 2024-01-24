/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:25:39 by artopall          #+#    #+#             */
/*   Updated: 2024/01/21 22:43:45 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_getsize(int size, char **array, char *sep)
{
	int	final;
	int	i;

	i = 0;
	final = 0;
	while (i < size)
	{
		final += ft_strlen(array[i]);
		if (i < size - 1)
			final += ft_strlen(sep);
		i += 1;
	}
	return ((size > 0) * (final));
}

char	*ft_strcat(char *s1, char *s2)
{
	char	*orig;

	orig = s1;
	while (*s1)
	{
		s1 += 1;
	}
	while (*s2)
	{
		*s1 = *s2;
		s1 += 1;
		s2 += 1;
	}
	*s1 = 0;
	return (orig);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		index;

	array = (char *)malloc(sizeof(char) * (ft_getsize(size, strs, sep) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	array[0] = 0;
	index = 0;
	while (index < size)
	{
		ft_strcat(array, strs[index]);
		if (index < size - 1)
			ft_strcat(array, sep);
		index += 1;
	}
	return (array);
}
