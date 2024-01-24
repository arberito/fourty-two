/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:12:20 by artopall          #+#    #+#             */
/*   Updated: 2024/01/20 14:42:13 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_right(int grid[6][6], int x, int y, int number)
{
	int	i;
	int	count;
	int	height;

	i = 4;
	count = 0;
	height = 1;
	while (i > 0)
	{
		if ((grid[y][i] >= height) || (i == x && number >= height))
		{
			if (grid[y][i] != 0)
				height = grid[y][i];
			else
				height = number;
			count += 1;
		}
		i -= 1;
	}
	if (count > grid[y][5])
		return (0);
	return (count <= grid[y][5]);
}

int	ft_check_left(int grid[6][6], int x, int y, int number)
{
	int	i;
	int	count;
	int	height;

	i = 1;
	count = 0;
	height = 1;
	while (i < 5)
	{
		if ((grid[y][i] >= height) || (i == x && number >= height))
		{
			if (grid[y][i] != 0)
				height = grid[y][i];
			else
				height = number;
			count += 1;
		}
		i += 1;
	}
	if (count > grid[y][0])
		return (0);
	return (1);
}
