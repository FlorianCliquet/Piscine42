/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 03:11:46 by florian           #+#    #+#             */
/*   Updated: 2024/07/22 03:11:47 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("The diff between `%s` and `%s` is : %d\n",
			av[1], av[2], ft_strcmp(av[1], av[2]));
	else
		printf("This function takes 2 args.\n");
	return (0);
}
*/
