/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:40:01 by florian           #+#    #+#             */
/*   Updated: 2024/07/14 13:53:52 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H

# define BSQ_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_GridInfo
{
	char	**grid;
	int		rows;
	int		cols;
	int		**dp;
	int		max_size;
	int		max_row;
	int		max_col;
}			t_GridInfo;

void		initialize_dp(t_GridInfo *info);

void		update_dp_and_find_max(t_GridInfo *info);

void		mark_largest_square(t_GridInfo *info);

void		free_2d_array(void **array, int rows);

void		process(int i, int j, t_GridInfo *info);

void		my_memset(int *arr, int value, int size);

void		my_strcpy(char *dest, const char *src);

int			min(int a, int b, int c);

char		**read_grid(FILE *file, int *rows, int *cols);

void		print_grid(char **grid, int rows, int cols);

void		find_largest_square(char **grid, int rows, int cols);

#endif