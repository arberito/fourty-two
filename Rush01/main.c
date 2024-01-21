/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:22:20 by artopall          #+#    #+#             */
/*   Updated: 2024/01/20 17:04:56 by artopall         ###   ########.fr       */
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
			ft_putchar(' ');
			x += 1;
		}
		ft_putchar('\n');
		y += 1;
	}
}

int	main(int ac, char *av[])
{
	int	grid[6][6] = {
	{0, 4, 3, 2, 1, 0},
	{4, 0, 0, 0, 0, 1},
	{3, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 2},
	{1, 0, 0, 0, 0, 2},
	{0, 1, 2, 2, 2, 0}};

	if (ft_tower_solver(grid, 1, 1))
	{
		ft_putstr("svoled!\n");
	}
	ft_printgrid(grid);
}
