/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:27:42 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 14:57:52 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **tab, int index)
{
	char	*temp;

	temp = tab[index];
	tab[index] = tab[index + 1];
	tab[index + 1] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int	index;

	index = 0;
	while (tab[index + 1])
	{
		if (ft_strcmp(tab[index], tab[index + 1]) > 0)
		{
			ft_swap(tab, index);
			index = -1;
		}
		index += 1;
	}
}
