/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbettert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 13:18:37 by mbettert          #+#    #+#             */
/*   Updated: 2017/07/02 18:34:26 by mbettert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	first_row(int n)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (i < n - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	last_row(int n)
{
	int i;

	i = 0;
	ft_putchar('\\');
	while (i < n - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}

void	cases(int x, int y)
{
	int i;

	if (x < 1 || y < 1)
		return ;
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	if (x == 1 && y > 1)
	{
		i = 0;
		ft_putchar('/');
		while (i < y - 2)
		{
			ft_putchar('\n');
			ft_putchar('*');
			i++;
		}
		ft_putchar('\n');
		ft_putchar('\\');
		ft_putchar('\n');
	}
	if (x > 1 && y == 1)
		first_row(x);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x > 1 && y > 1)
	{
		first_row(x);
		while (i < y - 2)
		{
			ft_putchar('*');
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			j = 0;
			ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
		last_row(x);
	}
	else
		cases(x, y);
}
