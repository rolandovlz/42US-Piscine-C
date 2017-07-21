/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:31:44 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/12 03:29:34 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*node;

	node = begin_list;
	if (node != 0)
		while (node->next != 0)
			node = node->next;
	return (node);
}
