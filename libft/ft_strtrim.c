/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:33:23 by artopall          #+#    #+#             */
/*   Updated: 2024/02/04 18:57:10 by artopall         ###   ########.fr       */
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

static int	ft_getpos(char *s1, char *set, int pos, char todo)
{
	while (todo == 'r' && pos - 1 > 0 && ft_isset(s1[pos - 1], set) == 1)
	{
		pos -= 1;
	}
	while (todo == 'b' && s1[pos] && ft_isset(s1[pos], set) == 1)
	{
		pos += 1;
	}
	return (pos);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		start;
	int		end;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	start = ft_getpos(s1, set, 0, 'b');
	end = ft_getpos(s1, set, ft_strlen(s1), 'r');
	if (end <= start)
	{
		return (ft_strdup(""));
	}
	return (ft_memcpy(ft_calloc(end - start + 1, 1), s1 + start, end - start));
}
