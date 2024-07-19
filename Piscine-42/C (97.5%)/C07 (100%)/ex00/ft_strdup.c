/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:51:59 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/01 13:52:00 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size(char *src)
{
	int	i;

	i = 0;
	while (i[src])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*ptr;
	int		index;

	index = 0;
	src_size = size(src);
	ptr = (char *)malloc(sizeof(char) * (src_size + 1));
	if (!ptr)
		return (NULL);
	while (src[index])
	{
		ptr[index] = src[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
