/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:09:45 by artopall          #+#    #+#             */
/*   Updated: 2024/01/22 08:51:58 by artopall         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_strstr(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	if (!charset[0])
		return (ft_strlen(str));
	while (str[i])
	{
		j = 0;
		while (charset[j] && str[i + j] == charset[j])
		{
			j += 1;
		}
		if (!charset[j])
		{
			return (i);
		}
		i += 1;
	}
	return (i);
}

int	ft_getsize(char *str, char *charset)
{
	int	i;
	int	size;

	size = 0;
	while (*str)
	{
		i = 0;
		while (charset[i] && *(str + i) == charset[i])
		{
			i += 1;
		}
		if (!charset[i])
		{
			size += 1;
		}
		str += 1;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		index;
	int		pos;

	array = (char **)malloc(sizeof(char *) * (ft_getsize(str, charset) + 1));
	if (array == NULL)
		return (NULL);
	index = 0;
	pos = 0;
	while (str[pos])
	{
		if (ft_strstr(str + pos, charset) > 0)
		{
			array[index] = malloc(sizeof(char) * (ft_strlen(str + pos) + 1));
			ft_strncpy(array[index], str + pos, ft_strstr(str + pos, charset));
			pos += ft_strstr(str + pos, charset);
			index += 1;
		}
		else
			pos += 1;
	}
	array[index] = NULL;
	return (array);
}
