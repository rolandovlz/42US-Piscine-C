/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 01:13:27 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/13 21:36:23 by rvelez           ###   ########.fr       */
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
	int		i;

	i = 1;
	ret = 0;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	while (i < argc)
	{
		if ((file = open(argv[i], O_RDONLY)) == -1)
			return (errno);
		ret = read(file, buf, BUF_SIZE);
		buf[ret] = '\0';
		write(1, buf, rvelez_strlen(buf));
		if ((close(file)) == -1)
			return (errno);
		i++;
	}
	return (0);
}
