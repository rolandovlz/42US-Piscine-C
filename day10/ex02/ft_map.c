/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:22:28 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/10 23:43:41 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int i;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
