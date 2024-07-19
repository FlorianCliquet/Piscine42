/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_0.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:03 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:04 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strncat(unsigned char *dest, unsigned char *src, int n)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen((char *)dest);
	while (i <= n)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
}
