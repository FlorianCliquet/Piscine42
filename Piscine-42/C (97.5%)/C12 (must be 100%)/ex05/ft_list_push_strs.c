/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 02:44:08 by florian           #+#    #+#             */
/*   Updated: 2024/07/18 10:52:18 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!(elem))
		return (NULL);
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*current;
	int		i;

	i = -1;
	begin_list = NULL;
	while (++i < size)
	{
		current = ft_create_elem(strs[i]);
		if (current)
		{
			current->next = begin_list;
			begin_list = current;
		}
	}
	return (begin_list);
}
