/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:35:08 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:51 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_display_file(char *path)
{
	char	buffer[4096];
	int		fd;
	int		len;

	fd = open(path, O_RDWR);
	if (fd < 0)
		return (-1);
	len = read(fd, buffer, 4096);
	while (len > 0)
	{
		write(1, buffer, len);
		len = read(fd, buffer, 4096);
	}
	close(fd);
	if (len)
		return (-1);
	else
		return (0);
}
