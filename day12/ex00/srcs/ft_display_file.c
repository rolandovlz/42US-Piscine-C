/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 01:13:27 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/13 20:57:36 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	rvelez_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int		file;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		if ((file = open(argv[1], O_RDONLY)) == -1)
			return (1);
		ret = read(file, buf, BUF_SIZE);
		buf[ret] = '\0';
		write(1, buf, rvelez_strlen(buf));
		if ((close(file)) == -1)
			return (1);
	}
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
