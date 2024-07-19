/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sentence.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:49 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:51 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

void	second(int len, t_hexdump_handle handle, unsigned char sentence[16])
{
	if (handle.with_c)
		ft_putstr("  ");
	else
		ft_putstr(" ");
	if (handle.with_c)
		print_hex_with_c(sentence, len);
	else
		print_hex_without_c(sentence, len);
	if (handle.with_c)
	{
		ft_putstr("  ");
		print_ascii(sentence, len);
	}
}

void	first(int len, t_hexdump_handle handle, int *i,
		unsigned char sentence[16])
{
	if (len > 0)
	{
		if (handle.with_c)
			ft_putstr("  ");
		else
			ft_putstr(" ");
		*i += len;
		if (handle.with_c)
			print_hex_with_c(sentence, len);
		else
			print_hex_without_c(sentence, len);
		if (handle.with_c)
		{
			ft_putstr("  ");
			print_ascii(sentence, len);
		}
	}
}

void	ft_repeat(int *i, int len, int repeat)
{
	if (repeat == 0)
		*i += len;
}

void	print_sentence(t_hexdump_handle handle, unsigned char sentence[16],
		int len, int *i)
{
	int	repeat;
	int	start;

	repeat = 0;
	start = *i;
	if (!handle.with_c)
	{
		print_address(start, handle);
		first(len, handle, i, sentence);
		ft_putchar('\n');
	}
	else
	{
		while (repeat < handle.number_of_c)
		{
			print_address(start, handle);
			if (len > 0)
			{
				second(len, handle, sentence);
				ft_repeat(i, len, repeat);
			}
			ft_putchar('\n');
			repeat++;
		}
	}
}
