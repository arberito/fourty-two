/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:24:56 by artopall          #+#    #+#             */
/*   Updated: 2024/01/20 16:15:16 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_printgrid(int grid[6][6]);
int		ft_check_left(int grid[6][6], int x, int y, int number);
void	ft_putstr(char *str);
int		ft_ishiding(int grid[6][6], int x, int y, int number);

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

int	ft_isright(int grid[6][6], int x, int y, int number)
{
	int	i;
	int	count;
	int	height;

	count = 0;
	height = 1;
	i = 4;
	while (i > 0)
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
		i -= 1;
	}
	if (count <= grid[y][5])
	{
		return (1);
	}
	return (0);
	// return (count <= grid[y][5]);
}

int	ft_isbottom(int grid[6][6], int x, int y, int number)
{
	int	i;
	int	count;
	int	height;

	count = 0;
	height = 1;
	i = 4;
	while (i > 0)
	{
		if (i == y && number >= height)
		{
			height = number;
			count += 1;
		}
		else if (grid[i][x] >= height)
		{
			height = grid[i][x];
			count += 1;
		}
		i -= 1;
	}
	if (count > grid[5][x])
		return (0);
	return (ft_isright(grid, x, y, number));
}

int	ft_istop(int grid[6][6], int x, int y, int number)
{
	int	i;
	int	count;
	int	height;

	count = 0;
	height = 1;
	i = 1;
	while (i < 5)
	{
		if (i == y && number >= height)
		{
			height = number;
			count += 1;
		}
		else if (grid[i][x] >= height)
		{
			height = grid[i][x];
			count += 1;
		}
		if (count > grid[0][x])
			return (0);
		i += 1;
	}
	if (count > grid[0][x])
		return (0);
	return (1);
}

int	ft_ishiding(int grid[6][6], int x, int y, int number)
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
	if (count > grid[y][0])
		return (0);
	return (1);
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
					if (ft_issafe(grid, x, y, number) && ft_isbottom(grid, x, y, number))
					{
						grid[y][x] = number;
						ft_printgrid(grid);
						ft_putstr("---------\n");
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
