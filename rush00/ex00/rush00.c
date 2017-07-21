/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpickett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 14:38:43 by jpickett          #+#    #+#             */
/*   Updated: 2017/07/02 20:36:40 by jpickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	first_last_row(int n)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i < n - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	cases(int x, int y)
{
	int i;

	if (x < 1 || y < 1)
		return ;
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x == 1 && y > 1)
	{
		i = 0;
		ft_putchar('o');
		ft_putchar('\n');
		while (i < y - 2)
		{
			ft_putchar('|');
			ft_putchar('\n');
			i++;
		}
		ft_putchar('o');
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
			ft_putchar('|');
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			j = 0;
			ft_putchar('|');
			ft_putchar('\n');
			i++;
		}
		first_last_row(x);
	}
	else
		cases(x, y);
}
