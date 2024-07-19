/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:31:29 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:31:38 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (!begin_list)
		return ;
	if (cmp(begin_list->data, data_ref) == 0)
		f(begin_list->data);
	ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
