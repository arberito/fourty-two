/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:49:15 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 09:05:55 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*node;
	t_list	*temp;

	list = NULL;
	node = NULL;
	while (size > 0)
	{
		node = malloc(sizeof(t_list));
		if (node == NULL)
		{
			while (list != NULL)
			{
				temp = list;
				list = list->next;
				free(temp);
			}
		}
		node->data = strs[size - 1];
		node->next = list;
		list = node;
		size -= 1;
	}
	return (list);
}
