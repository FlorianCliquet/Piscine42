/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:30 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:31 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

t_hexdump_handle	init_handle(char **av)
{
	t_hexdump_handle	handle;

	handle.with_c = 0;
	handle.first_file = -1;
	handle.last_file = -1;
	handle.no_file = 0;
	handle.input = av;
	handle.number_of_c = 0;
	return (handle);
}

void	condition(t_hexdump_handle *handle, char **argv, int argc)
{
	if (handle->with_c && !handle->no_file && ft_strcmp(argv[1], "-C") == 0)
		handle->first_file = 2;
	else if (handle->with_c && !handle->no_file && ft_strcmp(argv[1],
			"-C") != 0)
		handle->first_file = 1;
	else if (!handle->no_file)
		handle->first_file = 1;
	if (!handle->no_file && !handle->with_c)
		handle->last_file = argc - handle->first_file;
	else if (!handle->no_file && handle->with_c)
		handle->last_file = argc - handle->first_file + 1;
}

int	check_flag(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i][0] == '-')
		{
			if (argv[i][1] && argv[i][1] != 'C')
			{
				display_error(basename(argv[0]));
				display_error(ERROR_ILLEGAL_0);
				write(STDERR_FILENO, &argv[i][1], 1);
				display_error(ERROR_ILLEGAL_1);
				display_error(basename(argv[0]));
				display_error(ERROR_ILLEGAL_2);
				return (0);
			}
		}
		i++;
	}
	return (1);
}

t_hexdump_handle	get_option(int argc, char **argv)
{
	int					i;
	t_hexdump_handle	handle;

	handle = init_handle(argv);
	i = -1;
	if (argc < 2 || (argc < 3 && ft_strcmp(argv[1], "-C") == 0))
		handle.no_file = 1;
	while (++i < argc)
	{
		if (argc >= 2 && ft_strcmp(argv[i], "-C") == 0)
		{
			handle.with_c = 1;
			handle.number_of_c++;
		}
	}
	condition(&handle, argv, argc);
	handle.random = malloc(16 * sizeof(unsigned char));
	null_str(handle.random);
	handle.std_in = 0;
	return (handle);
}
