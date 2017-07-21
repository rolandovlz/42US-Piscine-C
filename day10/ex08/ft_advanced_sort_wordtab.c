/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:41:14 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/11 16:16:08 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insertion_sort(char **strings, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (strings[i] != 0)
	{
		j = i;
		while (j > 0)
		{
			if (cmp(strings[j - 1], strings[j]) > 0)
			{
				temp = strings[j];
				strings[j] = strings[j - 1];
				strings[j - 1] = temp;
			}
			j--;
		}
		i++;
	}
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	insertion_sort(tab, cmp);
}
