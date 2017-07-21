/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:43:08 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/07 16:42:16 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int n;
	int is_word;

	i = 0;
	n = 0;
	is_word = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			is_word = 1;
			i++;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (is_word)
				n++;
			is_word = 0;
			i++;
		}
	}
	return (n);
}

int		len_pos(char *str, int pos)
{
	int length;

	length = 0;
	while (str[pos] && str[pos] != ' ' && str[pos] != '\t' && str[pos] != '\n')
	{
		length++;
		pos++;
	}
	return (length);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**ws;

	i = 0;
	j = 0;
	if ((ws = malloc(sizeof(char *) * (ft_count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i])
		{
			k = 0;
			if ((ws[j] = malloc(sizeof(char) * (len_pos(str, i) + 1))) == NULL)
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				ws[j][k++] = str[i++];
			ws[j++][k] = '\0';
		}
	}
	ws[j] = NULL;
	return (ws);
}
