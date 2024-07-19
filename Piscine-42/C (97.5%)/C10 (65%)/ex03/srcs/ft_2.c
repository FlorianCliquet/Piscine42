/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:37:12 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:14 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_hexdump.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_advancedcat(char *prefixe, char c, char *suffixe)
{
	char	*dest;

	dest = malloc(ft_strlen(prefixe) + ft_strlen(suffixe) + 2);
	if (dest)
	{
		ft_strcpy(dest, prefixe);
		ft_addchar(dest, c);
		ft_strcat(dest, suffixe);
		return (dest);
	}
	return (NULL);
}
