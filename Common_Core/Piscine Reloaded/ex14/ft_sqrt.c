/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:47:52 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 01:47:53 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		printf("sqrt(%d) is equal : %d\n", n,
			ft_sqrt(n));
	}
	else
		printf("This program takes 1 arg.\n");
	return (0);
}
*/
