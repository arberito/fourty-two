/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:47:22 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 15:54:52 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t num)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i + 1 < num)
	{
		i += 1;
	}
	return ((num > 0) * ((unsigned char)s1[i] - (unsigned char)s2[i]));
}
