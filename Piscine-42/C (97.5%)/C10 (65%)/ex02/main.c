/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:43 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:44 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	error_displayed(char **av)
{
	ft_display((av[0]), STDERR_FILENO, ft_strlen(av[0]));
	ft_display(ERROR_0, STDERR_FILENO, ft_strlen(ERROR_0));
	ft_display(ERROR_00, STDERR_FILENO, ft_strlen(ERROR_00));
	ft_display((av[0]), STDERR_FILENO, ft_strlen(av[0]));
	ft_display(ERROR_000, STDERR_FILENO, ft_strlen(ERROR_000));
}

int	main(int ac, char **av)
{
	if (ac == 1)
		tail_without_option();
	else
	{
		if (ft_strcmp(av[1], "-c") == 0)
		{
			if (ac == 2)
			{
				error_displayed(av);
				return (1);
			}
			else if (ft_atoi(av[2]) == -1)
			{
				not_valid_input(av);
				return (1);
			}
			else
				return (tail_with_option_c(ac, av, ft_atoi(av[2])));
		}
		else
			return (tail_file(ac, av));
	}
}
