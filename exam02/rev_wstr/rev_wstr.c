/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 20:44:54 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 21:41:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		word_count(char *str)
{
	int i;
	int words;
	int flag;

	i = 0;
	words = 0;
	flag = 0;
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			flag = 1;
			i++;
		}
		if (flag == 1)
			words++;
		flag = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			i++;
		}
	}
	return (words);
}

void	reverse_order(char *str, int n)
{
	int spaces;
	int i;
	int j;
	
	i = 0;
	while(i < n)
	{
		spaces = n - 1 - i;
		j = 0;
		while (str[j])
		{
			if (str[j] == ' ' || str[j] == '\t')
			{
				j++;
				spaces--;
			}
			if (spaces == 0 && (str[j] != ' ' || str[j] != '\t'))
				write(1, &(str[j]), 1);
			j++;
		}
		if (i  <  n - 1)
			write (1, " ", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int words;
	words = 0;
	if (argc == 2 && word_count(argv[1]) > 0)
	{
		words = word_count(argv[1]);
		reverse_order(argv[1], words);
	}
	write(1, "\n", 1);
	return (0);
}
