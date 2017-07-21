/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 01:43:11 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/14 16:10:37 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (*root == 0)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	if (cmpf((*root)->item, item) >= 0)
		btree_insert_data(&(*root)->right, item, cmpf);
}
