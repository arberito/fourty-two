/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:52:37 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 23:56:20 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	uc;

	if (str == NULL || n == 0)
	{
		return (NULL);
	}
	i = 0;
	s1 = (unsigned char *)str;
	uc = (unsigned char)c;
	while (i < n && s1[i])
	{
		if (s1[i] == uc)
		{
			return (str + i);
		}
		i += 1;
	}
	return (NULL);
}
