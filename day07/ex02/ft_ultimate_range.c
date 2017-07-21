/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:39:46 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/06 19:32:55 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *int_array;

	i = 0;
	*range = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	int_array = *range;
	while (min < max)
	{
		int_array[i] = min;
		i++;
		min++;
	}
	return (i);
}
