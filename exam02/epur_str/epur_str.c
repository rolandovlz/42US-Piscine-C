/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:15:22 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 19:49:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	word_count(char *str)
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

void	whitespace(char *str)
{
	int i;
	int space_count;
	int space_flag;

	space_count = word_count(str) - 1;
	i = 0;
	space_flag = 0;
	while (str[i])
	{
		while(str[i] != ' ' && str[i] != '\t' && str[i])
		{
			write(1, &(str[i]), 1);
			i++;
			space_flag = 1;
		}
		if (space_count > 0 && space_flag == 1)
		{
			write(1, " ", 1);
			space_count--;
			space_flag = 0;
		}
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
	}

}

int	main(int argc, char *argv[])
{
	int words;
	words = 0;
	if (argc == 2 && word_count(argv[1]) > 0)
	{
		whitespace(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
