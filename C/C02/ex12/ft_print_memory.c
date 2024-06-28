/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:26:50 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/27 21:54:29 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexa_memory_addr(unsigned long addr)
{
	char		*base;
	unsigned long	temp;
	char		buffer[16];
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16)
		buffer[i++] = '0';
	i = 15;
	while (addr > 0)
	{
		buffer[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buffer, 16);
	write(1, ": ", 2);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr;
	char		*base;

	base = "0123456789abcdef";
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hexa_memory_addr((unsigned long)(addr + i));
		j = 0;
		while (j < 16 && i + j < size)
		{
			write(1, base + (ptr[i + j] / 16), 1);
			write(1, base + (ptr[i + j] % 16), 1);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		while (j < 16)
		{
			write(1, "  ", 2);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
				write(1, ptr + i + j, 1);
			else
				write(1, ".", 1);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}

int main(void)
{
    char data[] = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec\t\n\tprint_memory. \t\n\tlol.lol";
    
    ft_print_memory(data, sizeof(data));

    return 0;
}
