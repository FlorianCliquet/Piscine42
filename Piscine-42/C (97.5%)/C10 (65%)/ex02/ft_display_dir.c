/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_dir.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:10 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:15 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_display_wrong_directory(char *name, char **av)
{
	ft_display((av[0]), STDERR_FILENO, ft_strlen(av[0]));
	ft_display(ERROR_5, STDERR_FILENO, ft_strlen(ERROR_5));
	ft_display(name, STDERR_FILENO, ft_strlen(name));
	ft_display(ERROR_6, STDERR_FILENO, ft_strlen(ERROR_6));
	ft_display("\n", STDERR_FILENO, 1);
}
