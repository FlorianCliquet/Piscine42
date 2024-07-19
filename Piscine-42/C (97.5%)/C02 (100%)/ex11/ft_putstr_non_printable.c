/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:45:39 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/27 18:18:07 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;
	char	hex[3];

	index = 0;
	while (str[index])
	{
		if (!check(str[index]))
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[((unsigned char)str[index]) / 16];
			hex[2] = "0123456789abcdef"[((unsigned char)str[index]) % 16];
			write(1, hex, 3);
		}
		else
		{
			write(1, &str[index], 1);
		}
		index++;
	}
}
