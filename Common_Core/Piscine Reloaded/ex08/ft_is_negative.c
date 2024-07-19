/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:52:07 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 00:52:15 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_is_negative(atoi(av[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "This take 1 arguments.\n", 23);
	return (0);
}
*/
