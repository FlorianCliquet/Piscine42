/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:22:30 by florian           #+#    #+#             */
/*   Updated: 2024/07/16 17:21:20 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}
//  void	ft_putchar(char c)
//  {
//  	write(1, &c, 1);
//  }

//  void	ft_putnbr(int nb)
//  {
//  	unsigned int	n;
//  	if (nb < 0)
//  	{
//  		ft_putchar('-');
//  		n = -nb;
//  	}
//  	else
//  		n = nb;
//  	if (n > 9)
//  	{
//  		ft_putnbr(n / 10);
//  		n %= 10;
//  	}
//  	ft_putchar(n + '0');
//  }

//  int	main(void)
//  {
//  	int	tab[5];

//  	tab[0] = -1;
//  	tab[1] = -55;
//  	tab[2] = -2147483648;
//  	tab[3] = 2147483647;
//  	tab[4] = 0;
//  	ft_foreach(tab, 5, &ft_putnbr);
//  }
