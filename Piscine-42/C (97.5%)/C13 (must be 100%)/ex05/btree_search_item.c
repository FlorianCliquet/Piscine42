/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search_item.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:48:52 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:51:01 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	void *item;

	if (!root)
		return (NULL);
	if ((item = btree_search_item(root->left, data_ref, cmpf)))
		return (item);
	if (!cmpf(data_ref, root->item))
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}