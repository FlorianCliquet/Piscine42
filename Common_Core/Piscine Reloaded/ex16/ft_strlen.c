/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 02:51:10 by florian           #+#    #+#             */
/*   Updated: 2024/07/22 02:51:11 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("The len of '%s' is : %d.\n", av[1], ft_strlen(av[1]));
	else
		printf("The prog take a 1 arg.\n");
	return (0);
}
*/
