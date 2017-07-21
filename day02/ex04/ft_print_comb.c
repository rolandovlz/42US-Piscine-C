/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rolandovlz@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 13:20:10 by rvelez            #+#    #+#             */
/*   Updated: 2017/06/29 17:49:19 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int digits[3];

	digits[0] = '0';
	while (digits[0] <= '9')
	{
		if (digits[0] < digits[1] && digits[1] < digits[2])
		{
			ft_putchar(digits[0]);
			ft_putchar(digits[1]);
			ft_putchar(digits[2]);
			if (digits[0] != '7')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (digits[2]++ > '8')
		{
			digits[2] = '0';
			digits[1]++;
		}
		if (digits[1] > '8')
		{
			digits[1] = '0';
			digits[0]++;
		}
	}
}
