/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:24:56 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 21:47:29 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_printgrid(int grid[6][6]);

int	ft_issafe(int grid[6][6], int x, int y, int n)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (grid[y][i] == n || grid[i][x] == n)
		{
			return (0);
		}
		i += 1;
	}
	return (1);
}

int	ft_ishiding(int grid[6][6], int y, int x, int number)
{
	int	i;
	int	height;
	int	count;

	height = 1;
	count = 0;
	i = 1;
	while (i < 5)
	{
		if (i == x && number >= height)
		{
			height = number;
			count += 1;
		}
		else if (grid[y][i] >= height)
		{
			height = grid[y][i];
			count += 1;
		}
		i += 1;
	}
	// ft_putchar(y + '0');
	// ft_putchar(' ');
	// ft_putchar(count + '0');
	// ft_putchar(' ');
	// ft_putchar(grid[y][0] + '0');
	// ft_putchar('\n');
	return (count <= grid[y][0]);
}

int	ft_tower_solver(int grid[6][6], int x, int y)
{
	int	number;

	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			if (grid[y][x] == 0)
			{
				number = 1;
				while (number < 5)
				{
					if (ft_issafe(grid, x, y, number) && ft_ishiding(grid, y, x, number))
					{
						grid[y][x] = number;
						ft_printgrid(grid);
						ft_putchar('\n');
						if (ft_tower_solver(grid, 1, 1))
							return (1);
						grid[y][x] = 0;
					}
					number += 1;
				}
				return (0);
			}
			x += 1;
		}
		y += 1;
	}
	return (1);
}
