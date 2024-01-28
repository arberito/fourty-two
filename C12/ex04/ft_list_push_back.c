/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:36:37 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 08:47:59 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_last;
	t_list	*current_last;


	new_last = malloc(sizeof(t_list));
	if (new_last == NULL)
		return ;
	new_last->data = data;
	new_last->next = NULL;
	if (*begin_list == NULL)
	{
		*begin_list = new_last;
	}
	else
	{
		current_last = *begin_list;
		while (current_last->next != NULL)
		{
			current_last = current_last->next;
		}
		current_last->next = new_last;
	}
}
