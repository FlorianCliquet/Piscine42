/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bytes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:25 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:27 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

int	get_bytes(t_hexdump_handle *handle, unsigned char sentence[16],
		int *current, int *file)
{
	unsigned char	buffer[16];
	int				doneread;

	if (*file == 0)
		*file = check_valid(current, *handle, file, handle->input);
	if (*file == -1)
		return (-1);
	null_str(sentence);
	null_str(buffer);
	doneread = read(*file, buffer, 16);
	while (doneread < 16 && !last(*current, *handle) && doneread != -1)
	{
		close(*file);
		*current = *current + 1;
		*file = check_valid(current, *handle, file, handle->input);
		if (*file > 0)
			doneread += read(*file, buffer + doneread, 16 - doneread);
	}
	ft_strncat(sentence, buffer, doneread);
	return (doneread);
}
