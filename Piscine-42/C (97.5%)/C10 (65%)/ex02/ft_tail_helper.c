/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:24 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:26 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	writing_buffer(int num_bytes, int size, char *file_content, char **av)
{
	if (errno == EISDIR)
	{
		ft_display((av[0]), STDERR_FILENO, ft_strlen(av[0]));
		ft_display(DIR_STD_IN, STDERR_FILENO, ft_strlen(DIR_STD_IN));
		ft_display("\n", STDERR_FILENO, 1);
	}
	if (num_bytes > size)
		num_bytes = size;
	write(1, file_content + size - num_bytes, num_bytes);
	free(file_content);
}

char	*init_std(int *size, int *len, char *buffer)
{
	char	*file_content;

	file_content = malloc(1);
	if (!(file_content))
		return (0);
	file_content[0] = '\0';
	*size = 0;
	*len = read(0, buffer, 4096);
	return (file_content);
}

void	need_back_space(int *j, int *isFirst)
{
	if (*j > 0 || *isFirst != 1)
		ft_display("\n", 1, 1);
	*j = 0;
}
