/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:11:12 by artopall          #+#    #+#             */
/*   Updated: 2024/02/04 07:59:23 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *ptr1, void *ptr2, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (ptr1 == NULL || ptr2 == NULL || num == 0)
	{
		return (0);
	}
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	while (num - 1 > 0 && *s1 == *s2)
	{
		s1 += 1;
		s2 += 1;
		num -= 1;
	}
	return (*s1 - *s2);
}
