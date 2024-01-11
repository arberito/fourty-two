/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_rev_int_tab.c                                :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall <artopall@student.42quebec.com     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/09 13:42:54 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/09 13:49:21 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size -= 1;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		i += 1;
		size -= 1;
	}
}