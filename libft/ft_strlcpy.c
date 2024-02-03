/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:55:59 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 22:59:53 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = 0;
	return ((size_t)ft_strlen(src));
}
