/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:27:22 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 22:51:45 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*s;

	if (ptr == NULL)
		return (NULL);
	i = 0;
	s = (unsigned char *)ptr;
	while (i < num)
	{
		s[i] = (unsigned char)value;
		i += 1;
	}
	return (ptr);
}
