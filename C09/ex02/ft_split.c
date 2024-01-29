/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:09:45 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 22:03:38 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
		{
			return (1);
		}
		charset += 1;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
	{
		i += 1;
	}
	return (i);
}

int ft_get_size(char *str, char *charset)
{
	int size;
	
	size = 0;
	while (*str)
	{
		while (*str && !ft_is_charset(*str, charset))
			str += 1;
		if (*str)
			size += 1;
		while (*str && ft_is_charset(*str, charset))
			str += 1;
    }
    return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		index;
	int		i;

	array = malloc(sizeof(char *) * (ft_get_size(str, charset) + 1));
	if (array == NULL)
		return (NULL);
	index = 0;
	while (*str)
	{
		if (!ft_is_charset(*str, charset))
		{
			array[index] = malloc(sizeof(char) * (ft_strlen(str, charset) + 1));
			i = 0;
			while (ft_is_charset(*str, charset) && *str)
			{
				array[index][i]= *str;
				str += 1;
				i += 1;
			}
			array[index][i] = 0;
			index += 1;
		}
		str += 1;
	}
	array[index] = 0;
	return (array);
}

#include <stdio.h>

int	main()
{
	char	**split;

	split = ft_split("hello world", "l ");

	for (int i = 0; split[i]; i++)
	{
		printf("[%s]", split[i]);
	}
	
}
