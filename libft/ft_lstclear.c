/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:50:18 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 11:16:44 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst == NULL)
	{
		return ;
	}
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		free(*lst);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
