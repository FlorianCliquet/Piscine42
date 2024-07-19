/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:35:24 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:35:51 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	increment(t_list **prev, t_list **current)
{
	(*prev) = (*current);
	(*current) = (*current)->next;
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*current;

	prev = NULL;
	current = *begin_list;
	while (current)
	{
		if (!cmp(current->data, data_ref))
		{
			if (prev)
				prev->next = current->next;
			else
				*begin_list = current->next;
			if (free_fct)
				free_fct(current->data);
			free(current);
			if (prev)
				current = prev->next;
			else
				current = *begin_list;
		}
		else
			increment(&prev, &current);
	}
}
