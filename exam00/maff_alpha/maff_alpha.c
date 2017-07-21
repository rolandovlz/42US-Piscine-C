/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 18:31:33 by exam              #+#    #+#             */
/*   Updated: 2017/06/30 19:03:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	groovy_alphabet(void)
{
	char	lower;
	char	upper;
	int		isLowerCase;

	lower = 'a';
	upper = 'A';
	isLowerCase = 1;
	while (upper != '[' )
	{
		if (isLowerCase == 1)
		{
			write(1, &lower, 1);
			isLowerCase = 0;
		}
		else
		{
			write(1, &upper, 1);
			isLowerCase = 1;
		}
		lower++;
		upper++;
	}
}

int		main(void)
{
	char	newline;

	newline = '\n';
	groovy_alphabet();
	write(1, &newline, 1);
	return (0);
	
}
