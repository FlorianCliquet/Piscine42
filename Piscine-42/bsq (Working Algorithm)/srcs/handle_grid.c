/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:43:39 by florian           #+#    #+#             */
/*   Updated: 2024/07/14 13:49:18 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsq.h"

void	initialize_dp(t_GridInfo *info)
{
	int	i;
	int	j;

	i = 0;
	while (i < info->rows)
	{
		info->dp[i] = (int *)malloc(info->cols * sizeof(int));
		j = 0;
		while (j < info->cols)
		{
			info->dp[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	update_dp_and_find_max(t_GridInfo *info)
{
	int	i;
	int	j;

	i = -1;
	while (++i < info->rows)
	{
		j = -1;
		while (++j < info->cols)
		{
			if (info->grid[i][j] == 'o')
				info->dp[i][j] = 0;
			else
				process(i, j, info);
		}
	}
}

void	mark_largest_square(t_GridInfo *info)
{
	int	i;
	int	j;

	i = 0;
	while (i < info->max_size)
	{
		j = 0;
		while (j < info->max_size)
		{
			info->grid[info->max_row - i][info->max_col - j] = 'x';
			j++;
		}
		i++;
	}
}

void	free_2d_array(void **array, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	find_largest_square(char **grid, int rows, int cols)
{
	t_GridInfo	info;

	info.grid = grid;
	info.rows = rows;
	info.cols = cols;
	info.dp = NULL;
	info.max_size = 0;
	info.max_row = 0;
	info.max_col = 0;
	info.dp = (int **)malloc(rows * sizeof(int *));
	initialize_dp(&info);
	update_dp_and_find_max(&info);
	mark_largest_square(&info);
	free_2d_array((void **)info.dp, rows);
}
