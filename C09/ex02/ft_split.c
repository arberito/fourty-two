/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:09:45 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 18:49:59 by artopall         ###   ########.fr       */
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

int	ft_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j += 1;
		}
		if (!needle[j])
		{
			
		}
		i += 1;
	}
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

#include <stdio.h>

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		index;
	int		pos;
	int		last;

	array = malloc(sizeof(char *) * (ft_getsize(str, charset) + 1));
	if (array == NULL)
		return (NULL);
	index = 0;
	pos = 0;
	while (str[pos])
	{

	}
	array[index] = NULL;
	return (array);
}
