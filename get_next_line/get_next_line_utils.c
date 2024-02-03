/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:24:25 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 12:53:09 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// static int	ft_isnewline(char c)
// {
// 	return (c == '\n');
// }

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (0);
	}
	while (str[i])
	{
		i += 1;
	}
	return (i);
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

char	*ft_strdup(char *buffer, char *tokeep)
{
	char	*dupe;

	dupe = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(tokeep) + 1));
	if (dupe == NULL)
	{
		return (NULL);
	}
	dupe[0] = 0;
	if (tokeep != NULL)
	{
		dupe = ft_strcpy(dupe, tokeep);
		free(tokeep);
	}
	return (ft_strcpy(dupe + ft_strlen(dupe), buffer));
}
