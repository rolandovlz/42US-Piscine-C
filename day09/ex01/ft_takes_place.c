/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:45:30 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/07 02:25:25 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	calc_time(int *hour, char *am_pm)
{
	*hour = *hour % 24;
	if (*hour > 11)
		*am_pm = 'P';
	else
		*am_pm = 'A';
	*hour = *hour % 12;
	if (*hour == 0)
		*hour = 12;
}

void	ft_takes_place(int hour)
{
	int		second_hour;
	char	am_pm1;
	char	am_pm2;

	second_hour = hour + 1;
	calc_time(&hour, &am_pm1);
	calc_time(&second_hour, &am_pm2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%i.00 %c.M. AND %i.00 %c.M.\n", hour, am_pm1, second_hour, am_pm2);
}
