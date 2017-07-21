/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:03:39 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/14 23:40:07 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int h_left;
	int h_right;
	int height;

	if (root == 0)
		return (-1);
	h_left = btree_level_count(root->left);
	h_right = btree_level_count(root->right);
	if (h_left > h_right)
		height = 1 + h_left;
	else
		height = 1 + h_right;
	return (height);
}
