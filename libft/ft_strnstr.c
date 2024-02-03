/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:58:59 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 09:40:42 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (big == NULL || little == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
		{
			j += 1;
		}
		if (little[j] == 0)
		{
			return (big + i);
		}
		i += 1;
	}
	return (NULL);
}
