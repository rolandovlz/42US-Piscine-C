/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:50:40 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 20:41:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *range;
	int size;
	int i;
	int num;

	num = start;
	i = 0;
	if (end < start)
		size = (start - end) + 1;
	else
		size = (end - start) + 1;
	range = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		if (end < start)
			range[i++] = num--;
		else
			range[i++] = num++;
	}
	return (range);
}
