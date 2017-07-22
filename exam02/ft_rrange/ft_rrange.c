/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:50:40 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 20:09:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *range;
	int size;
	int i;
	int num;

	num = end;
	i = 0;
	if (end < 0)
		size = (-end - start) + 1;
	else
		size = (end - start) + 1;

	range = (int *)malloc(sizeof(int) * size);
	while (i < size)
		if (end < 0)
			range[i++] = num++;
		else
			range[i++] = num--;
	return (range);
}
