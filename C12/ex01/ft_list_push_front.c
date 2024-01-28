/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:11:31 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 08:22:21 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return ;
	new->data = data;
	new->next = *begin_list;
	*begin_list = new;
}
