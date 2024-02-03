/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:34:26 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 22:52:25 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, void *source, size_t num)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t			i;

	if (source == NULL || destination == NULL)
		return (destination);
	i = 0;
	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	while (i < num)
	{
		dst[i] = src[i];
		i += 1;
	}
	return (destination);
}
