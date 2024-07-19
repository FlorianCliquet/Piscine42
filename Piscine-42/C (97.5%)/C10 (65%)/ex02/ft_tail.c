/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:29 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:31 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	tail_without_option(void)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;
	ssize_t	total;

	total = 0;
	bytes_read = read(0, buffer, BUFFER_SIZE);
	total += bytes_read;
	while (bytes_read > 0)
	{
		bytes_read = read(0, buffer, BUFFER_SIZE);
		total += bytes_read;
	}
	write(0, buffer, bytes_read);
	return ;
}

void	std_in_with_c(int num_bytes, char **av)
{
	char	*file_content;
	char	*tmp;
	char	buffer[BUFFER_SIZE];
	int		size;
	int		len;

	if (num_bytes == 0)
		return ;
	file_content = init_std(&size, &len, buffer);
	if (!file_content)
		return ;
	while (len > 0)
	{
		tmp = malloc(size + len + 1);
		if (!(tmp))
			return ;
		tmp = ft_strncpy(tmp, file_content, size);
		free(file_content);
		ft_strncpy(tmp + size, buffer, len);
		file_content = tmp;
		size += len;
		file_content[size] = '\0';
		len = read(0, buffer, 4096);
	}
	writing_buffer(num_bytes, size, file_content, av);
}

int	condition_for_file(int i, int *error, char **av, int ac)
{
	int	fd;

	fd = open(av[i], O_RDWR);
	if (fd == -1 && errno != EISDIR)
	{
		(*error)++;
		ft_display_wrong_name(av[i], av);
		return (1);
	}
	else if (fd == -1 && errno == EISDIR)
	{
		display_directory(av[i], ac - 1, ((*error) == (i - 1)), av);
		return (1);
	}
	return (0);
}

int	tail_file(int ac, char **av)
{
	int	i;
	int	j;
	int	error;

	error = 0;
	i = 1;
	j = 0;
	while (i < ac)
	{
		if (condition_for_file(i, &error, av, ac) == 1)
			j = 1;
		else
		{
			need_back_space(&j, &i);
			ten_line_file_reader(av[i], ac - 1);
		}
		i++;
	}
	if (error > 0)
		return (1);
	return (0);
}

int	tail_with_option_c(int ac, char **av, int n)
{
	int	i;
	int	error;
	int	fd;

	i = 3;
	error = 0;
	if (i == ac)
		std_in_with_c(n, av);
	while (i < ac)
	{
		fd = open(av[i], O_RDWR);
		if (fd == -1 && errno != EISDIR)
		{
			ft_display_wrong_name(av[i], av);
			error++;
		}
		else if (fd == -1 && errno == EISDIR)
			display_directory(av[i], ac - 3, (error == (i - 3)), av);
		else
			nfile_reader(av[i], n, ac - 3, (error == (i - 3)));
		i++;
	}
	if (error > 0)
		return (1);
	return (0);
}
