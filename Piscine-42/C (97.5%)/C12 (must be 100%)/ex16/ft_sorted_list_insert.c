/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:47:04 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:28:05 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*e;

	if (!*begin_list || cmp(data, (*begin_list)->data) <= 0)
	{
		e = ft_create_elem(data);
		if (!(e))
			return ;
		e->next = *begin_list;
		*begin_list = e;
	}
	else
		ft_sorted_list_insert(&(*begin_list)->next, data, cmp);
}
