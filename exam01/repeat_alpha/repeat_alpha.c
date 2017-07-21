/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:18:28 by exam              #+#    #+#             */
/*   Updated: 2017/07/07 18:56:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		rvelez_letter_count(char c)
{
	int i;

	i = 1;
	if (c >= 65 && c <= 90)
	{
		return (((c - 65) % 26) + 1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (((c - 97) % 26) + 1);
	}
	else
		return (1);
}

void	rvelez_putchars(char c)
{
	int i;

	i = 0;
	while (i < rvelez_letter_count(c))
	{
		write(1, &c, 1);
		i++;
	}
}

int		rvelez_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (i < rvelez_strlen(argv[1]))
		{
			rvelez_putchars(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);

	return (0);
}
