/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:17:47 by florian           #+#    #+#             */
/*   Updated: 2024/07/15 23:18:18 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_item;
	t_list	*current;

	new_item = malloc(sizeof(t_list));
	if (!new_item)
		return ;
	new_item->next = NULL;
	new_item->data = data;
	if (*begin_list == NULL)
		*begin_list = new_item;
	else
	{
		current = *begin_list;
		while (current->next != NULL)
			current = current->next;
		current->next = new_item;
	}
}
