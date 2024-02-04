/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:01:34 by artopall          #+#    #+#             */
/*   Updated: 2024/02/04 07:59:12 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_finallen(size_t dstlen, char *src, size_t size)
{
	size_t	final;

	final = dstlen + (size_t)ft_strlen(src);
	if (size < dstlen)
	{
		final = size + (size_t)ft_strlen(src);
	}
	return (final);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	dstlen = (size_t)ft_strlen(dst);
	i = 0;
	if (size > 0)
	{
		while (src[i] && dstlen + i < size - 1)
		{
			dst[dstlen + i] = src[i];
			i += 1;
		}
		dst[dstlen + i] = 0;
	}
	return (ft_finallen(dstlen, src, size));
}
