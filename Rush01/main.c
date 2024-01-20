/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:22:20 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 21:33:23 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tower_solver(int grid[6][6], int x, int y);
void	ft_putstr(char *str);
void	ft_putchar(char c);

void	ft_printgrid(int grid[6][6])
{
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			ft_putchar(grid[y][x] + '0');
			x += 1;
		}
		ft_putchar('\n');
		y += 1;
	}
}

int	main(int ac, char *av[])
{
	int	grid[6][6];
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			grid[y][x] = 0;
			x += 1;
		}
		y += 1;
	}
	//col up
	grid[0][1] = 4;
	grid[0][2] = 3;
	grid[0][3] = 2;
	grid[0][4] = 1;
	
	//col down
	grid[5][1] = 1;
	grid[5][2] = 2;
	grid[5][3] = 2;
	grid[5][4] = 2;

	//row left
	grid[1][0] = 4;
	grid[2][0] = 3;
	grid[3][0] = 2;
	grid[4][0] = 1;

	//row right
	grid[1][5] = 1;
	grid[2][5] = 2;
	grid[3][5] = 2;
	grid[4][5] = 2;
	if (ft_tower_solver(grid, 1, 1))
	{
		ft_putstr("svoled!\n");
	}
	ft_printgrid(grid);
}
