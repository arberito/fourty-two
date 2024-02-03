/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:12:10 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 00:14:35 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strdup(char *s)
{
	char	*dupe;

	if (s == NULL)
	{
		return (NULL);
	}
	dupe = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dupe == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(dupe, s));
}
