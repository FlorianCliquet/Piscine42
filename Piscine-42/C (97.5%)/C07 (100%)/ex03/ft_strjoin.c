/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:57:12 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/01 17:39:37 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*allocate_memory(int size, char **strs, char *sep)
{
	int		total_len;
	int		sep_len;
	int		i;
	char	*ptr;

	if (size == 0)
	{
		ptr = (char *)malloc(1);
		if (ptr)
			ptr[0] = '\0';
		return (ptr);
	}
	sep_len = ft_len(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_len(strs[i]);
		i++;
	}
	total_len += sep_len * (size - 1);
	total_len += 1;
	return ((char *)malloc(total_len * sizeof(char)));
}

void	copy_strings(int size, char **strs, char *sep, char *ptr)
{
	int	i;
	int	j;
	int	k;
	int	sep_len;

	k = 0;
	sep_len = ft_len(sep);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ptr[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (j < sep_len)
				ptr[k++] = sep[j++];
		}
		i++;
	}
	ptr[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;

	ptr = allocate_memory(size, strs, sep);
	if (!ptr)
		return (NULL);
	copy_strings(size, strs, sep, ptr);
	return (ptr);
}
