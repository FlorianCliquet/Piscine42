/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:24:28 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/03 07:24:29 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (i[str])
		i++;
	return (i);
}

void	put_nbr(int nbr)
{
	unsigned int	n;
	char			c;

	if (nbr < 0)
	{
		n = -nbr;
		write(1, "-", 1);
	}
	else
		n = nbr;
	if (n > 9)
		put_nbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		write(1, par->str, len(par->str));
		write(1, "\n", 1);
		put_nbr(par->size);
		write(1, "\n", 1);
		write(1, par->copy, len(par->str));
		write(1, "\n", 1);
		par++;
	}
}
