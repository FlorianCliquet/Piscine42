/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:17:01 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 01:19:39 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		write(1, "Before swap: ", 13);
		ft_putnbr(a);
		ft_putchar(' ');
		ft_putnbr(b);
		ft_putchar('\n');
		write(1, "After swap: ", 12);
		ft_swap(&a, &b);
		ft_putnbr(a);
		ft_putchar(' ');
		ft_putnbr(b);
		ft_putchar('\n');
	}
	else
		write(1, "The program needs two arguments\n", 32);
	return (0);
}
*/
