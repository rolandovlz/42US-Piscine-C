/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:13:08 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 10:44:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mirror(char *str)
{
	int i;
	int add;
	char c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			add = 25;
			c = 'a';
			while (c <= 'm')
			{
				if (c == str[i])
					break;
				c++;
				add -= 2;
			}
			c += add;
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			add = 1;
			c = 'n';
			while (c <= 'z')
			{
				if (c == str[i])
					break;
				c++;
				add += 2;
			}
			c -= add;
		}
		else if (str[i] >= 'A' && str[i] <= 'M')
		{
			add = 25;
			c = 'A';
			while (c <= 'M')
			{
				if (c == str[i])
					break;
				c++;
				add -= 2;
			}
			c += add;
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			add = 1;
			c = 'N';
			while (c <= 'Z')
			{
				if (c == str[i])
					break;
				c++;
				add += 2;
			}
			c -= add;
		}

		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			write (1, &c, 1);
		else
			write (1, &(str[i]), 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc ==  2)
		mirror(argv[1]);
	write(1, "\n", 1);
	return(0);
}
