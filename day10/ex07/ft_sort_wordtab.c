/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:41:14 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/11 16:09:02 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 != 0 || *s2 != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	insertion_sort(char **strings)
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
			if (ft_strcmp(strings[j - 1], strings[j]) > 0)
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

void	ft_sort_wordtab(char **tab)
{
	insertion_sort(tab);
}
