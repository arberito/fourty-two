/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:33:32 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 15:36:47 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	unsigned char	uc;

	if (str == NULL)
	{
		return (NULL);
	}
	uc = (unsigned char)c;
	while (*str)
	{
		if (*str == uc)
		{
			return (str);
		}
		str += 1;
	}
	return (NULL);
}
