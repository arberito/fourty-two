/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:08:41 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 00:11:21 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nitems);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
