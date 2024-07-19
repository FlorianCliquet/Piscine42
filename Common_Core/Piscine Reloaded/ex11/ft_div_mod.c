/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:26:32 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 01:29:10 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	if (ac == 5)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		div = atoi(av[3]);
		mod = atoi(av[4]);
		printf("Before\na = %d\nb = %d\ndiv = %d\nmod = %d\n", a, b, div, mod);
		ft_div_mod(a, b, &div, &mod);
		printf("After\na = %d\nb = %d\ndiv = %d\nmod = %d\n", a, b, div, mod);
	}
	else
	{
		printf("Usage: ./ft_div_mod [a] [b] [div] [mod]\n");
	}
	return (0);
}
*/
