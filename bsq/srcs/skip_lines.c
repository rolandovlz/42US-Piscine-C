/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:32:07 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/19 09:48:00 by zgollwit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		skip_lines(char *map)
{
	int i;

	i = 0;
	while (map[i] >= '0' && map[i] <= '9')
		i++;
	return (i);
}
