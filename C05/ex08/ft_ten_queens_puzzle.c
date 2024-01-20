/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:05:30 by artopall          #+#    #+#             */
/*   Updated: 2024/01/19 11:28:27 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_setboard(int board[10][10])
{
	int	col;
	int	row;

	col = 0;
	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			board[col][row] = 0;
			row += 1;
		}
		col += 1;
	}
}


int	ft_solved(int tab[10][10], int x, int y)
{
	int	row;
	int	col;

	while (row < 10)
	{
		
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	solutions;
	int	row;

	row = 0;
	while (row < 10)
	{
		ft_setboard(board);
		solutions += 
		row += 1;
	}
	return (solutions);
}
