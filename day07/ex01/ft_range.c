/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:39:46 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/06 21:41:30 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range_array;

	range_array = 0;
	if (min >= max)
		return (0);
	range_array = (int *)malloc(sizeof(*range_array) * (max - min));
	i = 0;
	while (min < max)
	{
		range_array[i] = min;
		min++;
		i++;
	}
	return (range_array);
}
