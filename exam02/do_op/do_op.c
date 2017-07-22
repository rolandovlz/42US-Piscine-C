/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:52:26 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 19:07:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%i", (a + b));
		else if (argv[2][0] == '-')
			printf("%i", (a - b));
		else if (argv[2][0] == '*')
			printf("%i", (a * b));
		else if (argv[2][0] == '/')
			printf("%i", (a / b));
		else if (argv[2][0] == '%')
			printf("%i", (a % b));
		printf("\n");
	}
	else
		write(1, "\n", 1);
	return (0);
}
