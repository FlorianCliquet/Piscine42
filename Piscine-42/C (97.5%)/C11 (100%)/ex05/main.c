/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:22:04 by florian           #+#    #+#             */
/*   Updated: 2024/07/15 20:55:41 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

int	ft_putnbr(int n);

int	ft_error(char *op);

int	process_calc(char *nb1, char *op, char *nb2)
{
	int	n1;
	int	n2;

	n1 = ft_atoi(nb1);
	n2 = ft_atoi(nb2);
	if (n2 == 0 && (op[0] == '/' || op[0] == '%'))
		return (ft_error(op));
	if (op[0] == '+')
		return (ft_putnbr(n1 + n2));
	else if (op[0] == '-')
		return (ft_putnbr(n1 - n2));
	else if (op[0] == '*')
		return (ft_putnbr(n1 * n2));
	else if (op[0] == '/')
		return (ft_putnbr(n1 / n2));
	else if (op[0] == '%')
		return (ft_putnbr(n1 % n2));
	return (ft_putnbr(0));
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		process_calc(av[1], av[2], av[3]);
		write(1, "\n", 1);
	}
	return (0);
}
