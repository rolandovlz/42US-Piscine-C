/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:19:41 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/09 23:25:36 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int **board)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(board[row][col] + '0');
			if (col < 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
