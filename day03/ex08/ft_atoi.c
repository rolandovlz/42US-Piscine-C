/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:58:48 by rvelez            #+#    #+#             */
/*   Updated: 2017/06/30 22:59:02 by rvelez           ###   ########.fr       */
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
