/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_sort_int_tab.c                               :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall <artopall@student.42quebec.com     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/09 13:45:15 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/09 13:46:24 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i += 1;
	}
}