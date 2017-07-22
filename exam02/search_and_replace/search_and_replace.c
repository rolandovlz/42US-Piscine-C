/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:15:56 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 18:48:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int rvelez_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int i;
	char *str;

	i = 0;
	if (argc == 4 && rvelez_strlen(argv[2]) == 1 && rvelez_strlen(argv[3]) == 1)
	{
		str = argv[1];
		while (str[i])
		{
			if(str[i] == argv[2][0])
				write(1, argv[3], 1);
			else
				write(1, &(str[i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
