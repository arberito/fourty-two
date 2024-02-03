/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:30:35 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 15:44:35 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tr;

	if (s == NULL)
		return ;
	i = 0;
	tr = (unsigned char *)s;
	while (i < n)
	{
		tr[i] = 0;
		i += 1;
	}
}
