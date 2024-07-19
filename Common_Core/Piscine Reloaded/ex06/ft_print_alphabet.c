/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliauet <florian@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:42:26 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 00:42:27 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
		ft_putchar(i++);
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
