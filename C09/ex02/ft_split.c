/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:09:45 by artopall          #+#    #+#             */
/*   Updated: 2024/02/01 12:43:03 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ischarset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i += 1;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_ischarset(str[i], charset) == 1)
			return (i);
		i += 1;
	}
	return (i);
}

int	ft_getsize(char *str, char *charset)
{
	int	size;

	size = 0;
	while (*str)
	{
		while (*str && ft_ischarset(*str, charset) == 1)
		{
			str += 1;
		}
		if (*str != 0)
		{
			size += 1;
		}
		while (*str && ft_ischarset(*str, charset) == 0)
		{
			str += 1;
		}
	}
	return (size);
}

char	*ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (ft_ischarset(src[i], charset) == 1)
		{
			dest[i] = 0;
			return (src + i);
		}
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = 0;
	return (src + i);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		index;
	int		i;

	split = malloc(sizeof(char *) * (ft_getsize(str, charset) + 1));
	if (split == NULL)
		return (NULL);
	index = 0;
	while (*str)
	{
		while (*str && ft_ischarset(*str, charset) == 1)
			str += 1;
		if (*str != 0)
		{
			i = 0;
			split[index] = malloc(sizeof(char) * (ft_strlen(str, charset) + 1));
			str = ft_strcpy(split[index], str, charset);
			index += 1;
		}
		str += 1;
	}
	split[index] = NULL;
	return (split);
}
