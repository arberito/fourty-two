/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:37:41 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 23:46:38 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int				len;
	unsigned char	uc;

	if (str == NULL)
	{
		return (NULL);
	}
	uc = (unsigned char)c;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len - 1] == uc)
		{
			return (str + len - 1);
		}
		len -= 1;
	}
	return (NULL);
}
