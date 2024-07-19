/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:04:39 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 01:04:40 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
void	ft_putnbr(int nbr)
{
	unsigned int	n;
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	c = n + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		write(1, "Pointer value is : ", 18);
		ft_putnbr(n);
		write(1, "\n", 1);
		ft_ft(&n);
		write(1, "Now his value is : ", 18);
		ft_putnbr(n);
		write(1, "\n", 1);
	}
	else
		write(1, "This function take only 1 arg\n", 30);
	return (0);
}
*/
