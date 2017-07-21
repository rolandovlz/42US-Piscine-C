/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 01:13:27 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/13 23:25:28 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	display(int fd, int offset)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*string;
	
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	string = (char *)malloc(sizeof(char) * offset);
	ft_strcpy_tail(string, buf, offset);
	ft_putstr(string);
	free(string);
}

int		open_close_file(char *str, int offset)
{
	int	fd;

	if ((fd = open(str, O_RDONLY)) == -1)
		return (errno);
	display(fd, offset);
	if ((close(fd)) == -1)
		return (errno);
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 4;
	if (argc < 4)
		return (1);
	else if (argc == 4)
		open_close_file(argv[3], ft_atoi(argv[2]));
	else if (argc > 4)
	{
		write(1, "==> ", 5);
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, " <==\n", 5);
		open_close_file(argv[i], ft_atoi(argv[2]));
		while (i < argc)
		{
			write(1, "\n==> ", 5);
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, " <==\n", 5);
			open_close_file(argv[i], ft_atoi(argv[2]));
			i++;
		}
	}
	return (0);
}
