/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:18 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:20 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

void	ft_hexdump_normal(t_hexdump_handle *handle)
{
	unsigned char	sentence[16];
	int				current;
	int				bytes_read;
	int				file;
	int				i;

	file = 0;
	i = 0;
	bytes_read = 16;
	current = 0;
	null_str(sentence);
	while (bytes_read == 16)
	{
		bytes_read = get_bytes(handle, sentence, &current, &file);
		if (bytes_read == 16 && write_random(handle, sentence, &i))
			print_sentence(*handle, sentence, bytes_read, &i);
		null_str(handle->random);
		ft_strncpy(handle->random, sentence, bytes_read);
	}
	check_file(*handle);
	print_buffer(*handle, sentence, bytes_read, &i);
}

void	address(int *i, t_hexdump_handle *handle, unsigned char sentence[16],
		int len)
{
	if (len == 0)
		return ;
	print_buffer(*handle, sentence, len, i);
	if (*i % 16 == 0)
	{
		print_address(*i, *handle);
		ft_putchar('\n');
	}
}

int	done_read(t_hexdump_handle *handle, int error)
{
	if (error == EISDIR)
	{
		if (handle->with_c)
		{
			write(2, basename(handle->input[0]), ft_strlen(handle->input[0])
				- 2);
			write(2, ": ", 2);
			write(2, "-C", 2);
			write(2, ": Is a directory\n", 17);
		}
		else
		{
			write(2, basename(handle->input[0]), ft_strlen(handle->input[0])
				- 2);
			write(2, ": ", 2);
			write(2, basename(handle->input[0]), ft_strlen(handle->input[0])
				- 2);
			write(2, ": Is a directory\n", 17);
		}
		return (0);
	}
	return (1);
}

void	ft_hexdump_no_file(t_hexdump_handle *handle, int *i)
{
	unsigned char	buffer[2];
	unsigned char	sentence[16];
	int				len;
	int				doneread;

	len = 0;
	doneread = 1;
	while (doneread > 0)
	{
		doneread = read(0, buffer, 1);
		if (doneread && len < 16)
			sentence[len++] = buffer[0];
		else if (doneread && len == 16)
		{
			if (write_random(handle, sentence, i))
				print_sentence(*handle, sentence, len, i);
			ft_strncpy(handle->random, sentence, 16);
			sentence[0] = buffer[0];
			len = 1;
		}
	}
	if (done_read(handle, errno))
		address(i, handle, sentence, len);
}
