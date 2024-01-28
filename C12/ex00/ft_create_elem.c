/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:07:43 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 08:10:36 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (p == NULL)
		return (NULL);
	p->data = data;
	p->next = NULL;
	return (p);
}
