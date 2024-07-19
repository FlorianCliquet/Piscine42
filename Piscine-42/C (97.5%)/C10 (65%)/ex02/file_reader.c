/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:06 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:51 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

char	*fill_file_content(int *len, unsigned int *size, int fd, char *buffer)
{
	char	*file_content;
	char	*tmp;

	file_content = malloc(1);
	if (!(file_content))
		return (NULL);
	file_content[0] = '\0';
	*size = 0;
	*len = read(fd, buffer, BUFFER_SIZE);
	while (*len > 0)
	{
		tmp = malloc(*size + *len + 1);
		if (!(tmp))
			return (NULL);
		tmp = ft_strncpy(tmp, file_content, *size);
		free(file_content);
		ft_strncpy(tmp + *size, buffer, *len);
		file_content = tmp;
		*size += *len;
		file_content[*size] = '\0';
		*len = read(fd, buffer, BUFFER_SIZE);
	}
	return (file_content);
}

char	*file_content_reader(int fd, unsigned int *size)
{
	char	buffer[BUFFER_SIZE];
	char	*file_content;
	int		len;

	file_content = fill_file_content(&len, size, fd, buffer);
	if (len)
	{
		free(file_content);
		return (NULL);
	}
	return (file_content);
}

int	nfile_reader(char *path, unsigned int n, int multiple, int error)
{
	char			*file_content;
	int				fd;
	unsigned int	size;

	if (path)
		fd = open(path, O_RDWR);
	else
		fd = STDIN_FILENO;
	file_content = file_content_reader(fd, &size);
	if (fd != STDIN_FILENO)
		close(fd);
	if (!file_content)
		return (-1);
	if (multiple > 1)
	{
		if (!error)
			write(1, "\n", 1);
		ft_display_name(path);
	}
	if (n > size)
		n = size;
	ft_display(file_content + size - n, 1, n);
	free(file_content);
	return (0);
}

void	display_ten_lines(char *file_content)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (file_content[i])
	{
		if (file_content[i] == '\n')
			j++;
		i++;
	}
	i = 0;
	while (file_content[i])
	{
		if (j <= 10)
		{
			ft_display(file_content + i, 1, ft_strlen(file_content) - i);
			break ;
		}
		if (file_content[i] == '\n')
			j--;
		i++;
	}
	free(file_content);
}

int	ten_line_file_reader(char *path, int multiple)
{
	char			*file_content;
	int				fd;
	unsigned int	size;

	if (path)
		fd = open(path, O_RDWR);
	else
		fd = STDIN_FILENO;
	file_content = file_content_reader(fd, &size);
	if (fd != STDIN_FILENO)
		close(fd);
	if (!file_content)
		return (-1);
	if (multiple > 1)
	{
		ft_display_name(path);
	}
	display_ten_lines(file_content);
	return (0);
}
