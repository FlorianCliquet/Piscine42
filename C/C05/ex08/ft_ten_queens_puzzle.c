/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:16:51 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/30 20:53:52 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_sol(int board[10])
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	issafe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || board[i] - i == row - col)
			return (0);
		else if (board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int board[10], int col, int *count)
{
	int	i;

	i = 0;
	if (col == 10)
	{
		print_sol(board);
		(*count)++;
		return ;
	}
	while (i < 10)
	{
		if (issafe(board, i, col))
		{
			board[col] = i;
			solve(board, col + 1, count);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;
	int	i;

	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	count = 0;
	solve(board, 0, &count);
	return (count);
}
