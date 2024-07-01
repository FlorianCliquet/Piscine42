/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:21:15 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/30 19:21:17 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	n;

	if ((nb < 0) || (nb > 12))
		return (0);
	n = 1;
	while (nb > 1)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
