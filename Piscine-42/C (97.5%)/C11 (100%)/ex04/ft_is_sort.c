/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:52:02 by florian           #+#    #+#             */
/*   Updated: 2024/07/16 17:21:52 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	test;

	test = 1;
	i = 0;
	while ((i < length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			test = 0;
		i++;
	}
	i = 0;
	if (test == 1)
		return (1);
	while ((i < length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
