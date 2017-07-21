/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:31:44 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/12 01:41:46 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*node;

	node = begin_list;
	i = 1;
	if (begin_list == 0)
		return (0);
	while (node->next != 0)
	{
		node = node->next;
		i++;
	}
	return (i);
}
