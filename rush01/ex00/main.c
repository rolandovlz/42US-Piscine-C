/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:19:40 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/09 23:39:34 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_board(int **board);

int		**ft_convert_to_int(char **str)
{
	int	**board;
	int	row;
	int	col;

	row = 0;
	board = (int **)malloc(sizeof(int *) * 9);
	while (row < 9)
	{
		col = 0;
		board[row] = (int *)malloc(sizeof(int) * 9);
		while (col < 9)
		{
			if (str[row][col] >= '1' && str[row][col] <= '9')
				board[row][col] = str[row][col] - '0';
			else
				board[row][col] = 0;
			col++;
		}
		row++;
	}
	return (board);
}

int		check_unit(int **board, int row, int col, int num)
{
	int	row_offset;
	int	col_offset;
	int	k;
	int	m;

	row_offset = 3 * (row / 3);
	col_offset = 3 * (col / 3);
	k = 0;
	while (k < 3)
	{
		m = 0;
		while (m < 3)
		{
			if (board[row_offset + k][col_offset + m] == num)
				return (0);
			m++;
		}
		k++;
	}
	return (1);
}

int		is_valid_cell(int **board, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (board[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (board[i][col] == num)
			return (0);
		i++;
	}
	if (!check_unit(board, row, col, num))
		return (0);
	return (1);
}

int		sudoku(int **board, int pos)
{
	int		num;
	int		row;
	int		col;

	row = pos / 9;
	col = pos % 9;
	num = 0;
	if (pos < 81)
	{
		if (board[row][col] != 0)
			sudoku(board, pos + 1);
		else
			while (++num < 10)
				if (is_valid_cell(board, row, col, num))
				{
					board[row][col] = num;
					if (sudoku(board, pos + 1))
						return (1);
					board[row][col] = 0;
				}
		return (0);
	}
	ft_print_board(board);
	return (1);
}

int		main(int argc, char **argv)
{
	char	**puzzle;
	int		col;
	int		row;

	if (argc == 10)
	{
		row = 0;
		puzzle = (char **)malloc(sizeof(char *) * 9);
		while (row < 9)
		{
			puzzle[row] = (char *)malloc(sizeof(char) * 9);
			col = 0;
			while (col < 9)
			{
				puzzle[row][col] = argv[row + 1][col];
				col++;
			}
			row++;
		}
		sudoku(ft_convert_to_int(puzzle), 0);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
