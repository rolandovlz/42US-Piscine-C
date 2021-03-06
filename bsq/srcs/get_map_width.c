/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:27:31 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/17 11:53:27 by zgollwit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		get_map_width(char *map)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (map[i] != '\n' && map[i] != '\0')
		i++;
	i++;
	while (map[i] != '\n' && map[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}
