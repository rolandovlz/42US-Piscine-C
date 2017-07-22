/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:36:53 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 16:49:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	brainfuck(char *str)
{
	char bytes[2048] = {0};
	char *ptr = bytes;
	int i = 0;
	

	while (str[i])
	{
		if (str[i] == '>')
			++ptr;
		else if (str[i] == '<')
			--ptr;
		else if (str[i] == '+')
			++(*ptr);
		else if (str[i] == '-')
			--(*ptr);
		else if (str[i] == '.')
			ft_putchar(*ptr);
		else if (str[i] == '[')
		{
			if (*ptr == 0)
				while (str[i] != ']')
					i++;
			else
			{
				i++;
				continue;
			}
		}
		else if (str[i] == ']')
		{
			if (*ptr != 0)
				while (str[i] != '[')
					i--;
			else
			{
				i++;
				continue;
			}
		}

		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		brainfuck(argv[1]);
	return (0);
}
