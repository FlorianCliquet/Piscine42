/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:39:30 by florian           #+#    #+#             */
/*   Updated: 2024/07/14 15:51:16 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bsq.h"

int	main(int argc, char *argv[])
{
	FILE	*file;
	char	**grid;
	int		rows;
	int		cols;

	if (argc < 2)
	{
		write(STDOUT_FILENO, "Usage: ./bsq <file_path>\n", 25);
		return (1);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		write(STDOUT_FILENO, "Error: Unable to open file.\n", 28);
		return (1);
	}
	grid = read_grid(file, &rows, &cols);
	fclose(file);
	find_largest_square(grid, rows, cols);
	print_grid(grid, rows, cols);
	free_2d_array((void **)grid, rows);
	return (0);
}
