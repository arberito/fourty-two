/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:25:54 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 08:03:10 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **tab, int index)
{
	char	*temp;

	temp = tab[index];
	tab[index] = tab[index + 1];
	tab[index + 1] = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	index;

	index = 0;
	while (tab[index + 1])
	{
		if (cmp(tab[index], tab[index + 1]) > 0)
		{
			ft_swap(tab, index);
			index = -1;
		}
		index += 1;
	}
}
