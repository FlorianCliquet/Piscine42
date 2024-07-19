/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:52:16 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:52:24 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

static int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return (1 + ((left > right) ? left : right));
}

void	btree_process_level(t_btree *root, int *t, int level,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (level == 1)
	{
		applyf(root->item, t[0], t[1]);
		t[1] = 0;
	}
	else if (level > 1)
	{
		btree_process_level(root->left, t, level - 1, applyf);
		btree_process_level(root->right, t, level - 1, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int	t[3];
	int	h;
	int	i;

	if (!root)
		return ;
	h = btree_level_count(root);
	i = 0;
	while (i < h)
	{
		t[0] = i;
		t[1] = 1;
		btree_process_level(root, t, ++i, applyf);
	}
}
