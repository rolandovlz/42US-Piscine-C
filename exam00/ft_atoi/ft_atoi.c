/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 21:08:29 by exam              #+#    #+#             */
/*   Updated: 2017/06/30 21:58:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	if(str[0] > 57 || str[0] < 48)
		return 0;

	int	length;
	int units;
	int i;

	length = 0;
	while (str[length])
		length++;
	units = 1;
	if (length > 1)
	{
		i = 0;
		while (i < length - 1)
		{
			units *= 10;
			i++;
		}
	}
	i = 0;
	int sum;

	sum = 0;
	while (i < length)
	{
		sum += ((str[i] - 48) * units);
		units /= 10;
		i++;	   
	}
	return sum;
}
