/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 19:01:34 by exam              #+#    #+#             */
/*   Updated: 2017/07/07 19:42:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		rvelez_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rvelez_putstr(char *str)
{
	int i;

	i = 0;
	while (i < rvelez_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	if(argc == 3)
	{
		if(rvelez_strlen(argv[1]) > rvelez_strlen(argv[2]))
			argv[2][j] = '\0';
		while(argv[2][j] != '\0')
		{
			if(argv[1][i] == argv[2][j])
			{
				i++;
				j++;
			}
			else
				j++;
		}
		if(argv[1][i] == '\0')
			rvelez_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
