/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:54:02 by florian           #+#    #+#             */
/*   Updated: 2024/07/20 01:54:03 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

/*
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr(av[1]);
	else
		ft_putstr("This program takes only 1 arg.");
	ft_putchar('\n');
	return (0);
}
*/
