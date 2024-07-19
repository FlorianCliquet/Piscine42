/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:30:47 by florian           #+#    #+#             */
/*   Updated: 2024/07/16 17:21:42 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ptr;
	int	i;

	ptr = malloc(length * sizeof(int));
	if (length < 1 || !(ptr))
		return (NULL);
	i = -1;
	while (++i < length)
		ptr[i] = f(tab[i]);
	return (ptr);
}

// int	plus_one(int i)
// {
// 	return (i + 1);
// }

// void print_tab(int *ptr, int size)
// {
// 	int i = -1;
// 	char c;
// 	while (++i < size)
// 	{
// 		c = ptr[i] + '0';
// 		write(1, &c, 1);
// 		write(1, "\n",1);
// 	}
// }
// int main()
// {
// 	int tab[5];
// 	tab[0] = 1;
// 	tab[1] = 2;
// 	tab[2] = 3;
// 	tab[3] = 4;
// 	tab[4] = 5;
// 	print_tab(tab, 5);
// 	int *ptr = ft_map(tab, 5, &plus_one);
// 	print_tab(ptr,5);
// }