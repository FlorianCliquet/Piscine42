/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:53:28 by florian           #+#    #+#             */
/*   Updated: 2024/07/14 13:53:33 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsq.h"

void	print_grid(char **grid, int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			write(STDOUT_FILENO, &grid[i][j], 1);
			j++;
		}
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

char	**read_grid(FILE *file, int *rows, int *cols)
{
	char	line[256];
	char	**grid;

	grid = NULL;
	*rows = 0;
	*cols = 0;
	while (fgets(line, sizeof(line), file))
	{
		if (*cols == 0)
		{
			while (line[*cols] != '\n' && line[*cols] != '\0')
				(*cols)++;
		}
		grid = (char **)realloc(grid, (*rows + 1) * sizeof(char *));
		grid[*rows] = (char *)malloc((*cols + 1) * sizeof(char));
		my_strcpy(grid[*rows], line);
		(*rows)++;
	}
	return (grid);
}
