/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_out.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:55:31 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/19 22:32:22 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*redirect_out(char *file_str)
{
	char	*matrix;
	int		fd;
	int		read_size;

	read_size = get_file_size(file_str);
	matrix = (char *)malloc(sizeof(char) * (read_size + 1));
	fd = open(file_str, O_RDONLY);
	if (fd == -1)
	{
		return ("nope");
	}
	read(fd, matrix, read_size);
	matrix[read_size] = '\0';
	if (close(fd) == -1)
	{
		return ("nope");
	}
	return (matrix);
}
