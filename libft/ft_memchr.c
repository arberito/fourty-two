/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:52:37 by artopall          #+#    #+#             */
/*   Updated: 2024/02/04 12:33:27 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ustr;
	unsigned char	uc;

	if (str == NULL || n == 0)
	{
		return (NULL);
	}
	i = 0;
	ustr = (unsigned char *)str;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (*ustr == uc)
		{
			return (ustr);
		}
		i += 1;
		ustr += 1;
	}
	return (NULL);
}
