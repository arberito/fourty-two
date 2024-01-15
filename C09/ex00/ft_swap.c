/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_swap.c                                       :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/09 13:37:39 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/15 13:03:10 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
