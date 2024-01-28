/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:50:23 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 22:30:24 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s;

	i = 0;
	s = malloc(sizeof(t_stock_str) * ac);
	if (s == NULL)
		return (NULL);
	while (i < ac)
	{
		s[i].copy = ft_strlen(av[i]);
		s[i].copy = ft_strdup(av[i]);
		s[i].str = av[i];
		if (s[i].copy == NULL)
		{
			while (--i >= 0)
				free(s[i].copy);
			free(s);
			return (NULL);
		}
		i += 1;
	}
	s[i].str = 0;
	return (s);
}
