/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_split.c                                      :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/15 07:33:23 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/15 09:14:38 by artopall         #######   #######.qc    */
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

int	ft_strstr(char *s1, char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (needle[j] && s1[i + j] == needle[j])
		{
			j += 1;
		}
		if (!needle[j])
		{
			return (i);
		}
		i += 1;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_arraylen(char *str, char *charset)
{
	int	i;
	int	size;

	size = 0;
	while (*str)
	{
		i = 0;
		while (*str + i && charset[i] && *str + i == charset[i])
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

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;

	if (ft_arraylen(str, charset) == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char *) * ft_arraylen(str, charset) + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ft_arraylen(str, charset))
	{
		array[i] = malloc(sizeof(char) * ft_strlen(str) + 1);
		array[i] = ft_strncpy(array[i], str, ft_strstr(str, charset));
		i += 1;
	}
	array[i] = NULL;
	return (array);
}
