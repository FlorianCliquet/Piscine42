/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:40:07 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 10:42:31 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_merge(t_list *current, t_list *next, int (*cmp)())
{
	if (!current)
		return (next);
	if (!next)
		return (current);
	if (cmp(current->data, next->data) > 0)
	{
		next->next = ft_merge(current, next->next, cmp);
		return (next);
	}
	current->next = ft_merge(current->next, next, cmp);
	return (current);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*prev;
	t_list	*next;

	if (!*begin_list || !(*begin_list)->next)
		return ;
	prev = *begin_list;
	next = prev->next;
	while (next && next->next)
	{
		next = next->next;
		prev = prev->next;
		next = next->next;
	}
	next = prev->next;
	prev->next = NULL;
	ft_list_sort(&(*begin_list), cmp);
	ft_list_sort(&next, cmp);
	*begin_list = ft_merge(*begin_list, next, cmp);
}
