/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcliquet <fcliquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:37:47 by fcliquet          #+#    #+#             */
/*   Updated: 2024/07/18 11:53:00 by fcliquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H

# define BTREE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;


#endif