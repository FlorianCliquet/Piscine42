/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:35:44 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:51 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_display_file(char *path)
{
	char	buffer[4096];
	int		is_open;
	int		len;

	is_open = open(path, O_RDWR);
	if (is_open < 0)
		return (-1);
	len = read(is_open, buffer, sizeof(buffer));
	while (len > 0)
	{
		write(1, buffer, len);
		len = read(is_open, buffer, sizeof(buffer));
	}
	close(is_open);
	if (len < 0)
		return (-1);
	else
		return (0);
}
