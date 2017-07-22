/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 12:26:48 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 14:35:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	if_hex(size_t n)
{
	if (n == 10)
		return 'a';
	else if (n == 11)
		return 'b';
	else if (n == 12)
		return 'c';
	else if (n == 13)
		return 'd';
	else if (n == 14)
		return 'e';
	else
		return 'f';
}
void	print_memory(const void *addr, size_t size)
{
	char hex[3];
	size_t first;
	size_t last;
	int elements = 0;
	int col = 0;
	int i = 0;
	int tab[10] = {0, 23, 150, 255, 12, 16, 21, 42};

	while (i < 10)
	{	
		first = tab[i] / 16;
		last = tab[i] % 16;
		if (first < 10)
			hex[0] = (first + '0');
		else
			hex[0] = if_hex(first);

		if (last < 10)
			hex[1] = (first + '0');
		else
			hex[1] = if_hex(last);
		hex[2] = '\0';
		elements = 0;	
		while (elements < 8)
		{
			col = 0;
			if (elements % 2 != 0)
				while (col < 4)
				{
					write(1, "0", 1);
					col++;
				}
			else 
				while (col < 4)
				{
					while (col < 2)
					{
						write(1, &(hex[col]), 1);
						col++;
					}
					write(1, "0", 1);
					col++;
				}
			write(1, " ", 1);
			elements++;
		}
		elements = 0;
		while (elements < 16)
		{
			write(1, ".", 1);
			elements++;
		}
		i++;
		write(1, "\n", 1);
	}
	printf("%lu\n%lu\n",sizeof(addr), size);
}

int		main(void)
{
	int tab[11] = {0, 23, 150, 255, 12, 16, 21, 42, 10, 10, 10};
	printf("%p\n", tab);
	print_memory(tab, sizeof(tab));
	return (0);
}
