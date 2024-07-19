/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:37:09 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:45:37 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*b;

	if ((b = malloc(sizeof(t_btree))))
	{
		b->left = NULL;
		b->right = NULL;
		b->item = item;
	}
	return (b);
}
