/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 13:07:50 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/01 13:43:58 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int pow;

	if (power < 0)
		return (0);
	i = 0;
	pow = 1;
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}
