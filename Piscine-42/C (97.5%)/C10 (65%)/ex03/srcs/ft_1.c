/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:07 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:08 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

int	ft_strncmp(unsigned char *s1, unsigned char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < 16)
	{
		i++;
	}
	if (i == 16)
		return (0);
	return (s1[i] - s2[i]);
}

void	ft_strncpy(unsigned char *dest, unsigned char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

int	is_printable(char str)
{
	if (!(str >= 32 && str <= 126))
		return (0);
	return (1);
}

char	*ft_addchar(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	str[i] = c;
	str[i + 1] = '\0';
	return (str);
}
