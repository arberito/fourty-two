/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_strjoin.c                                    :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 22:42:30 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/15 07:28:33 by artopall         #######   #######.qc    */
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

int	ft_alloc(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i += 1;
	}
	return (len + (ft_strlen(sep) * i));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i += 1;
	}
	while (*src)
	{
		dest[i] = *src;
		i += 1;
		src += 1;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size <= 0)
	{
		str = malloc(0);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	str = malloc(sizeof(char) * ft_alloc(size, strs, sep) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i + 1 != size)
			str = ft_strcat(str, sep);
		i += 1;
	}
	str[i] = 0;
	return (str);
}
