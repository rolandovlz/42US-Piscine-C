/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:04:32 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 18:13:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rvelez_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	main(int argc, char *argv[])
{
	if (argc > 1)
		write(1, argv[1], rvelez_strlen(argv[1]));
	write(1, "\n", 1);
	return (0);
}
