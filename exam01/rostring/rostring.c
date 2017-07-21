/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:17:12 by exam              #+#    #+#             */
/*   Updated: 2017/07/07 21:57:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		word_counter(char *str)
{
	int i;
	int word_count;
	int is_word;

	i = 0;
	is_word = 0;
	word_count = 0;
	while(str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			is_word = 1;
			i++;
		}
		if(is_word == 1)
			word_count++;
		is_word = 0;
		if (str[i] || str[i] == ' ' || str[i] == '\t')
			i++;
	}
	return (word_count);
}

int		word_length_pos(char *str, int pos)
{
	int length;

	length = 0;
	while (str[pos] && str[pos] != ' ' && str[pos] != '\t')
	{
		pos++;
		length++;
	}
	return (length);
}

void	word_shifter(char *str)
{
	char	**words;
	char	**shift;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((**words = malloc(sizeof(char *) * word_counter(str)) == 0))
			return ;
	shift = malloc(sizeof(char *) * word_counter(str));
	while (str[i])
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (j < word_counter(str))
		{
			words[j] = malloc(sizeof(char) * word_length_pos(str, i));
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			while(str[i] && str[i] != ' ' && str[i] != '\t')
			{
				words[j][k] = str[i];
				k++;
				i++;
			}
			j++;
		}
		i++;
	}
	i = 0;
	j = 1;
	while (i < (word_counter(str) - 1))
	{
		shift[i] = malloc(sizeof(char) * word_length_pos(word[j], 0));
		i++;
		j++;
	}
	shift[word_counter(str) - 1] = words[0];
	i = 0;
	j = 0;
	while (i < word_counter(str))
	{
		while (j < word_length_pos(word[j], 0))
		{
			shift[i][j] = 
		}
	}
	free(*words);
	free(*shift);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		word_shifter(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
