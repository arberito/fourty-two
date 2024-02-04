/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:58:59 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 21:58:05 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	if (big == NULL || little == NULL)
	{
		return (NULL);
	}
	if (little[0] == 0)
	{
		return (big);
	}
	while (*big && len >= (size_t)ft_strlen(little))
	{
		if (ft_memcmp(big, little, (size_t)ft_strlen(little)) == 0)
		{
			return (big);
		}
		big += 1;
		len -= 1;
	}
	return (NULL);
}
