/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:43:40 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:31:11 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	if (begin_list)
		return (1 + ft_list_size(begin_list->next));
	else
		return (0);
}

static t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list || !nbr)
		return (begin_list);
	return (ft_list_at(begin_list->next, nbr - 1));
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*right;
	void			*data;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = ft_list_size(begin_list) - ++i;
	while (begin_list && (j > 1))
	{
		right = ft_list_at(begin_list, j - 1);
		data = begin_list->data;
		begin_list->data = right->data;
		right->data = data;
		begin_list = begin_list->next;
		j = ft_list_size(begin_list) - ++i;
	}
}
