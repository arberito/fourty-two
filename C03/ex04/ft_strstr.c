/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 06:49:31 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 15:47:52 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == 0)
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while (to_find[i] && *(str + i) == to_find[i])
		{
			i += 1;
		}
		if (!to_find[i])
		{
			return (str);
		}
		str += 1;
	}
	return (NULL);
}
