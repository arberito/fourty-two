/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:24:51 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 08:32:20 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *s1, char *s2)
{
	int	len;

	len = ft_strlen(s1);
	while (*s2)
	{
		s1[len] = *s2;
		s2 += 1;
		len += 1;
	}
	s1[len] = 0;
	return (s1);
}

static char	*ft_strcpy(char *dst, char *src)
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	return (ft_strcat(ft_strcpy(str, s1), s2));
}
