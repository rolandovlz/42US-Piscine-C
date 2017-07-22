/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:46:13 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 11:08:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	word_count(char *str)
{
	int i;
	int flag;
	int count;
	
	i = 0;
	flag = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			flag = 1;
			i++;
		}
		if (flag == 1)
			count++;
		flag = 0;
		while(str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;

	}
	return (count);
}

void	ft_epur(char *str, int wc)
{
	int i;

	i = 0;
	while (str[i] && wc != 0)
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &(str[i]), 1);
			i++;
		}
		wc--;
		if (wc != 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		if (word_count(argv[1]) > 0)
			ft_epur(argv[1], word_count(argv[1]));
	write(1, "\n", 1);
	return (0);
}
