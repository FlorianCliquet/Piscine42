/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:51:09 by florian           #+#    #+#             */
/*   Updated: 2024/07/15 20:55:21 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return (n * sign);
}

int	ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(1, "-", 1);
		nb = -n;
	}
	else
	{
		nb = n;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
	return (0);
}

int	ft_error(char *op)
{
	if (op[0] == '/')
	{
		write(STDERR_FILENO, "Stop : division by zero", 23);
	}
	else if (op[0] == '%')
	{
		write(STDERR_FILENO, "Stop : modulo by zero", 21);
	}
	return (1);
}
