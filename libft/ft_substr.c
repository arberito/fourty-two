/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:18:15 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 17:53:07 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL)
	{
		return (NULL);
	}
	substr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (substr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] && i < len)
	{
		substr[i] = s[start];
		i += 1;
		start += 1;
	}
	substr[i] = 0;
	return (substr);
}
