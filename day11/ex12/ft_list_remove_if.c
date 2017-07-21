/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:38:17 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/12 23:39:45 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*head;
	t_list	*node;
	t_list	*temp;

	head = *begin_list;
	temp = 0;
	while (head)
	{
		node = head->next;
		if (cmp(head->data, data_ref) == 0)
		{
			free(head);
			if (*begin_list == head)
				*begin_list = node;
			else if (temp != 0)
				temp->next = node;
		}
		else
			temp = head;
		head = node;
	}
}
