/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 03:35:34 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/12 08:53:20 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;

	if (*begin_list != 0)
		while (*begin_list != 0)
		{
			node = *begin_list;
			node = node->next;
			free(*begin_list);
			*begin_list = node;
		}
}
