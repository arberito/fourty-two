/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:01:34 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 23:11:09 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;

	if (dst == NULL || src == NULL || size == 0)
		return (0);
	dstlen = (size_t)ft_strlen(dst);
	i = 0;
	while (src[i] && (dstlen + i) < size - 1)
	{
		dst[dstlen + i] = src[i];
		i += 1;
	}
	dst[dstlen + i] = 0;
	return (dstlen + (size_t)ft_strlen(src));
}
