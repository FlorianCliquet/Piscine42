/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:36:55 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:36:56 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

void	print_address(unsigned long address, t_hexdump_handle handle)
{
	char	*hex;
	char	hexa[9];
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (address)
	{
		hexa[i] = hex[address % 16];
		address /= 16;
		i++;
	}
	while ((i < 8 && handle.with_c) || (i < 7 && !handle.with_c))
	{
		hexa[i] = '0';
		i++;
	}
	i--;
	while (i + 1)
	{
		write(1, &hexa[i], 1);
		i--;
	}
}

void	print_ascii(unsigned char *address, int offset)
{
	int	i;

	i = 0;
	ft_putchar('|');
	while (i < 16 && offset--)
	{
		if (is_printable(address[i]))
			ft_putchar(address[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('|');
}

void	print_buffer(t_hexdump_handle handle, unsigned char *sentence, int len,
		int *i)
{
	if (len == -1)
		return ;
	print_sentence(handle, sentence, len, i);
	if (len != 16 && len != 0)
	{
		print_address(*i, handle);
		ft_putchar('\n');
	}
}

void	display_error(char *str)
{
	write(STDERR_FILENO, str, ft_strlen(str));
}
