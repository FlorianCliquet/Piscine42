/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:33:49 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 01:40:04 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		printf("Recusrive factorial of %d is equal to %d\n", n,
			ft_recursive_factorial(n));
	}
	else
		printf("The function needs 1 arg only.\n");
	return (0);
}
*/
