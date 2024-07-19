/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:18 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:20 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	display_directory(char *path, int multiple, int error, char **av)
{
	if (multiple > 1)
	{
		if (!error)
			write(1, "\n", 1);
		ft_display_name(path);
		ft_display_wrong_directory(path, av);
	}
	else
		ft_display_wrong_directory(path, av);
}

void	ft_display(char *str, int output, int n)
{
	write(output, str, n);
}

void	ft_display_name(char *name)
{
	ft_display("==> ", 1, ft_strlen("==> "));
	ft_display(name, 1, ft_strlen(name));
	ft_display(" <==\n", 1, ft_strlen(" <==\n"));
}

void	not_valid_input(char **av)
{
	ft_display((av[0]), STDERR_FILENO, ft_strlen(av[0]));
	ft_display(ERROR_1, STDERR_FILENO, ft_strlen(ERROR_1));
	ft_display(av[2], STDERR_FILENO, ft_strlen(av[2]));
	ft_display("’\n", STDERR_FILENO, ft_strlen("’\n"));
}

void	ft_display_wrong_name(char *name, char **av)
{
	ft_display((av[0]), STDERR_FILENO, ft_strlen(av[0]));
	ft_display(ERROR_3, STDERR_FILENO, ft_strlen(ERROR_3));
	ft_display(name, STDERR_FILENO, ft_strlen(name));
	ft_display(ERROR_4, STDERR_FILENO, ft_strlen(ERROR_4));
	ft_display(strerror(errno), STDERR_FILENO, ft_strlen(strerror(errno)));
	ft_display("\n", STDERR_FILENO, 1);
}
