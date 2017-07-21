/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 19:45:53 by exam              #+#    #+#             */
/*   Updated: 2017/07/07 20:10:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int size;
	int *array;

	i = 0;
	if (end > start)
		size = end - start;
	else
		size = start - end;
	array = malloc(sizeof(int) * (size));
	if (end > start)
	{
		while (start <= end)
		{
			array[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = start;
			i++;
			start--;
		}
	}
	return array;
}
