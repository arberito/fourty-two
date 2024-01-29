/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:24:26 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 22:36:37 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	*ft_calloc(size_t n_elem, size_t size)
{
	size_t	i;
	size_t	total_size;
	void	*ptr;
	
	total_size = n_elem * size;
	ptr = malloc(total_size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i += 1;
	}
	((unsigned char *)ptr)[i] = 0;
	return (ptr);
}
