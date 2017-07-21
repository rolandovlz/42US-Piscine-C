/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:18:21 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/14 22:42:27 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	while (root != 0 && root->item != data_ref)
	{
		if (cmpf(root->item, data_ref) < 0)
			root = root->left;
		else
			root = root->right;
	}
}
