/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_strdup.c                                     :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 22:08:27 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 22:11:26 by artopall         #######   #######.qc    */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	
	dup = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	dup = ft_strcpy(dup, src);
	return (dup);
}
