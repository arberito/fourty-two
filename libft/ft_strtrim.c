/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:33:23 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 17:48:21 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set += 1;
	}
	return (0);
}

static int	ft_getsize(char *s1, char *set)
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

char	*ft_strtrim(char *s1, char *set)
{
	char	*trim;
	int		i;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	trim = ft_calloc((ft_getsize(s1, set) + 1), sizeof(char));
	if (trim == NULL)
	{
		return (NULL);
	}
	i = 0;
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
				trim[i] = *s1;
				i += 1;
				s1 += 1;
			}
		}
	}
	trim[i] = 0;
	return (trim);
}
