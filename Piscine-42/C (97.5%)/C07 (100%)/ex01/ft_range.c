/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:13:30 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/04 02:58:44 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	index;

	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (NULL);
	if (min >= max)
		return (0);
	index = 0;
	while (min < (max))
	{
		ptr[index] = min;
		min++;
		index++;
	}
	return (ptr);
}
