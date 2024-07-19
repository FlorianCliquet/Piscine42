/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:43 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:45 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

void	print_hex_with_c(unsigned char *address, int offset)
{
	int		i;
	char	*g_hex;

	g_hex = "0123456789abcdef";
	i = 0;
	while (i < 16 && offset - i)
	{
		ft_putchar(g_hex[address[i] / 16]);
		ft_putchar(g_hex[address[i] % 16]);
		if (i != 15)
			ft_putstr(" ");
		if (i == 7)
			ft_putstr(" ");
		i++;
	}
	while (i < 16)
	{
		ft_putstr("  ");
		if (i != 15)
			ft_putstr(" ");
		if (i == 7)
			ft_putstr(" ");
		i++;
	}
}

void	add_whitespace(int i)
{
	if (i != 14)
		ft_putstr(" ");
}

void	add_whitespace2(int *i)
{
	if (*i != 14)
		ft_putstr(" ");
	ft_putstr("    ");
	(*i) += 2;
}

void	print_hex_without_c(unsigned char *address, int offset)
{
	int		i;
	int		j;
	char	*g_hex;

	g_hex = "0123456789abcdef";
	i = 0;
	while (i < 16 && i < offset)
	{
		j = 2;
		while (--j >= 0)
		{
			if ((i + j) < offset)
			{
				ft_putchar(g_hex[address[i + j] / 16]);
				ft_putchar(g_hex[address[i + j] % 16]);
			}
			else
				ft_putstr("00");
		}
		add_whitespace(i);
		i += 2;
	}
	while (i < 16)
		add_whitespace2(&i);
}
