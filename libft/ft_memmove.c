/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:40:10 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 22:53:30 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, void *source, size_t num)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t			i;

	if (source == NULL || destination == NULL)
		return (destination);
	i = 0;
	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	if (dst < src)
	{
		while (num > 0)
		{
			dst[num - 1] = src[num - 1];
			num -= 1;
		}
	}
	while (i < num)
	{
		dst[i] = src[i];
		i += 1;
	}
	return (destination);
}
