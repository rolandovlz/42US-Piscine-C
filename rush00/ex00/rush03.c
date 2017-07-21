/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 12:47:20 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/02 20:44:03 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	first_last_row(int n)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < n - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	cases(int x, int y)
{
	int i;

	if (x < 1 || y < 1)
		return ;
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x == 1 && y > 1)
	{
		i = 0;
		ft_putchar('A');
		ft_putchar('\n');
		while (i < y - 2)
		{
			ft_putchar('B');
			ft_putchar('\n');
			i++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x > 1 && y == 1)
		first_last_row(x);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x > 1 && y > 1)
	{
		first_last_row(x);
		while (i < y - 2)
		{
			ft_putchar('B');
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			j = 0;
			ft_putchar('B');
			ft_putchar('\n');
			i++;
		}
		first_last_row(x);
	}
	else
		cases(x, y);
}
