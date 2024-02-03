/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:19:14 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 09:22:55 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (s == NULL)
	{
		return (NULL);
	}
	map = ft_strdup(s);
	if (map == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*s)
	{
		map[i] = f(i, *s);
		i += 1;
		s += 1;
	}
	return (s);
}
