/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:09:31 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 12:25:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_units(int n)
{
	int units;

	units = 0;
	while (n != 0)
	{
		n = n / 10;
		units++;
	}
	return (units);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int units;

	units = 0;
	if(nbr > -10 && nbr < 10)
	{
		if (nbr >= 0)
		{
			str = (char *)malloc(sizeof(char) + 1);
			str[0] = (nbr + '0');
			str[1] = '\0';
		}
		else
		{
			str = (char *)malloc(sizeof(char) + 2);
			str[0] = '-';
			str[1] = (-nbr + '0');
			str[2] = '\0';
		}
	}
	else 
	{
		units = ft_units(nbr);
		if (nbr > 0)
		{
			str = (char *)malloc(sizeof(char) * units + 1);
			str[units] = '\0';
			units--;
			while (units >= 0)
			{
				str[units] = ((nbr % 10) + '0');
				nbr = nbr / 10;
				units--;
			}
		}
		else
		{
			str = (char *)malloc(sizeof(char) * units + 2);
			str[units + 1] = '\0';
			str[0] = '-';
			while (units > 0)
			{
				str[units] = (-(nbr % 10) + '0');
				nbr = nbr / 10;
				units--;
			}
		}
	}
	return (str);
}
