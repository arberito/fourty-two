/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_lstmap.c                                   1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/03 09:50:18 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/13 13:04:58 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*map;
	t_list	*head;

	if (lst == NULL)
	{
		return (NULL);
	}
	map = NULL;
	head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (head == NULL)
			head = map;
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (head);
}
