/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfukc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 20:13:14 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/18 21:47:26 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	char array[2046] = {0};
	char *ptr = array;
	int i = 0;

	while (argv[1][i])
	{
		if (argv[1][i] == '>')
			++ptr;
		else if (argv[1][i] == '<')
			--ptr;
		else if (argv[1][i] == '+')
			++*ptr;
		else if (argv[1][i] == '-')
			--*ptr;
		else if (argv[1][i] == '.')
			ft_putchar(*ptr);
		i++;
	}

}
