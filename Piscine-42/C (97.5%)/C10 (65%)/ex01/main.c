/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:35:58 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:38:51 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	handle_first_case(void)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
		{
			ft_display_error(strerror(errno), STDERR_FILENO);
			return (1);
		}
		bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE);
	}
	return (0);
}

int	handle_second_case(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		if (open(av[i], O_RDWR) < 0)
		{
			ft_display_error(ERROR_1, STDERR_FILENO);
			ft_display_error(av[i], STDERR_FILENO);
			ft_display_error(ERROR_2, STDERR_FILENO);
			ft_display_error(strerror(errno), STDERR_FILENO);
			ft_display_error("\n", STDERR_FILENO);
			return (1);
		}
		else
			ft_display_file(av[i]);
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		return (handle_first_case());
	}
	else
	{
		return (handle_second_case(ac, av));
	}
}
