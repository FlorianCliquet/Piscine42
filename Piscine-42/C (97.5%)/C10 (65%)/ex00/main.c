/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:35:29 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:35:31 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	int	n;

	if (ac < 2)
		ft_display_error("File name missing.\n", 2);
	else if (ac > 2)
		ft_display_error("Too many arguments.\n", 2);
	else
	{
		n = ft_display_file(av[1]);
		if (n < 0)
			ft_display_error("Cannot read file.\n", 2);
	}
	return (0);
}
