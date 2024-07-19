/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:50 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:53 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

void	check_file(t_hexdump_handle handle)
{
	int	i;
	int	file;

	i = handle.first_file;
	while (i < handle.last_file + 1)
	{
		if (!handle.input[i] || ft_strcmp(handle.input[i], "-C") == 0)
			i++;
		else
		{
			file = open(handle.input[i], O_RDWR);
			if (file != -1)
			{
				close(file);
				return ;
			}
			close(file);
			i++;
		}
	}
	file = open(handle.input[i - 1], O_RDWR);
	read(file, "", 1);
	if (!handle.input[i - 1] || !handle.input[i] || ft_strcmp(handle.input[i],
			"-C") != 0)
		err(handle.input[i - 1], handle.input[0]);
}

int	file_checker(int *file, t_hexdump_handle handle, int *current, int flag)
{
	*file = open(handle.input[*current + handle.first_file], flag);
	if (*file < 0)
	{
		err(handle.input[*current + handle.first_file], handle.input[0]);
		close(*file);
	}
	else
	{
		close(*file);
		*file = open(handle.input[*current + handle.first_file], O_RDWR);
		return (1);
	}
	(*current)++;
	return (-1);
}

int	check_valid(int *current, t_hexdump_handle handle, int *file, char **av)
{
	while (!last(*current - 1, handle))
	{
		if (!handle.input[*current + handle.first_file]
			|| ft_strcmp(handle.input[*current + handle.first_file],
				basename(av[0])) != 0)
		{
			if (file_checker(file, handle, current, O_RDWR) == 1)
				return (*file);
		}
		else if (file_checker(file, handle, current, O_RDWR) == 1)
			return (*file);
	}
	return (-1);
}
