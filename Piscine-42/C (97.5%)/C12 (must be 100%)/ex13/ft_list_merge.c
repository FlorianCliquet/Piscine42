/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:39:58 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 10:39:42 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!*begin_list1)
		*begin_list1 = begin_list2;
	else if ((*begin_list1)->next)
		ft_list_merge(&(*begin_list1)->next, begin_list2);
	else
		(*begin_list1)->next = begin_list2;
}
