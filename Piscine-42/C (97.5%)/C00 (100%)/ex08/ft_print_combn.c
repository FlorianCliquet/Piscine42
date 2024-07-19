/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:28:59 by fcliquet          #+#    #+#             */
/*   Updated: 2024/06/27 12:32:17 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_recursive(char t[], int n, int index, int start)
{
	int	i;

	if (index == n)
	{
		write(1, t, n);
		if (t[0] != '9' - n + 1 || t[n - 1] != '9')
		{
			write(1, ", ", 2);
		}
		return ;
	}
	i = start;
	while (i <= '9')
	{
		t[index] = i;
		ft_print_combn_recursive(t, n, index + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	t[10];

	if (n < 1 || n > 9)
		return ;
	ft_print_combn_recursive(t, n, 0, '0');
}
