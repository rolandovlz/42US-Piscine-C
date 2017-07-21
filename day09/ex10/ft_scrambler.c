/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 04:09:46 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/07 06:18:47 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tempa;
	int tempb;
	int tempc;
	int tempd;

	tempa = ***a;
	tempb = *b;
	tempc = *******c;
	tempd = ****d;
	***a = tempb;
	*b = tempd;
	*******c = tempa;
	****d = tempc;
}
