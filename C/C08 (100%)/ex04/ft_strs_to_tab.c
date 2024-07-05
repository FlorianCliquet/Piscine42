/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:23:29 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/05 20:07:40 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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
	ptr = (char *)malloc(sizeof(char) * (src_size + 1);
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	if (ac < 0)
		ac = 0;
	ptr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].size = size(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
    ptr[i].str = NULL;
    ptr[i].size = 0;
    ptr[i].copy = NULL;
	return (ptr);
}
