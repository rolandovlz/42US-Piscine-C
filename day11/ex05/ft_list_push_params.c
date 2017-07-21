/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:31:44 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/12 20:13:12 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*node;

	i = 1;
	list = 0;
	if (ac > 0)
	{
		while (i < ac)
		{
			node = ft_create_elem(av[i]);
			node->next = list;
			list = node;
			i++;
		}
	}
	return (list);
}
