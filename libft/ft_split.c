/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:46:29 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 09:39:34 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char set)
{
	return (c == set);
}

static int	ft_slen(char *s1, char set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_isset(s1[i], set) == 0)
	{
		i += 1;
	}
	return (i);
}

static int	ft_getsize(char *s1, char set)
{
	int	size;

	size = 0;
	while (*s1)
	{
		while (*s1 && ft_isset(*s1, set) == 1)
		{
			s1 += 1;
		}
		if (*s1 != 0)
		{
			while (*s1 && ft_isset(*s1, set) == 0)
			{
				size += 1;
				s1 += 1;
			}
		}
	}
	return (size);
}

static char	**ft_freeall(char **array, int index)
{
	while (index > 0)
	{
		free(array[index - 1]);
		index -= 1;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**split;
	int		index;
	int		i;

	if (s == NULL)
	{
		return (NULL);
	}
	split = malloc(sizeof(char *) * (ft_getsize(s, c) + 1));
	if (split == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (*s)
	{
		while (*s && ft_isset(*s, c) == 1)
		{
			s += 1;
		}
		if (*s != 0)
		{
			i = 0;
			split[index] = ft_calloc(ft_slen(s, c) + 1, sizeof(char));
			if (split[index] == NULL)
			{
				return (ft_freeall(split, index));
			}
			while (*s && ft_isset(*s, c) == 0)
			{
				split[index][i] = *s;
				i += 1;
				s += 1;
			}
			index += 1;
		}
	}
	split[index] = NULL;
	return (split);
}
