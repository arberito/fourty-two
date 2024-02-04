/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 08:18:15 by artopall          #+#    #+#             */
/*   Updated: 2024/02/04 18:57:21 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	if (s == NULL)
	{
		return (NULL);
	}
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	if ((size_t)ft_strlen(s + start) < len)
		len = (size_t)ft_strlen(s + start);
	return (ft_memcpy(ft_calloc(len + 1, 1), s + start, len));
}
