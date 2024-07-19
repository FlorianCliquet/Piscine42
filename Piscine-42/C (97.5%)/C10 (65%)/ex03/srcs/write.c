/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:55 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:58 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

int	write_random(t_hexdump_handle *handle, unsigned char *str, int *i)
{
	if (ft_strncmp(handle->random, str) != 0)
	{
		handle->std_in = 0;
		return (1);
	}
	if (handle->std_in)
	{
		*i += 16;
		return (0);
	}
	write(1, "*\n", 2);
	handle->std_in = 1;
	*i += 16;
	return (0);
}

void	null_str(unsigned char *str)
{
	int	i;

	i = -1;
	while (++i < 16)
		str[i] = 0;
}

int	last(int i, t_hexdump_handle handle)
{
	if (i >= handle.last_file - handle.first_file)
		return (1);
	return (0);
}

void	err(char *filename, char *base)
{
	int		i;
	char	*err_message;

	i = 0;
	if (!filename || ft_strcmp(filename, "-C") == 0)
		return ;
	if (errno == 9)
	{
		write(2, basename(base), ft_strlen(basename(base)));
		write(2, ": ", 2);
		write(2, "all input file arguments failed\n", 32);
		return ;
	}
	write(2, basename(base), ft_strlen(basename(base)));
	write(2, ": ", 2);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	err_message = strerror(errno);
	while (err_message[i])
	{
		write(2, &err_message[i], 1);
		i++;
	}
	write(2, "\n", 1);
}
