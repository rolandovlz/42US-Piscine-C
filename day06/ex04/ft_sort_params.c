/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:48:10 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/05 23:35:48 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	insertion_sort(char **argv_strings, int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < n)
	{
		j = i;
		while (j > 0)
		{
			if (ft_strcmp(argv_strings[j - 1], argv_strings[j]) > 0)
			{
				temp = argv_strings[j];
				argv_strings[j] = argv_strings[j - 1];
				argv_strings[j - 1] = temp;
			}
			j--;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc > 1)
	{
		insertion_sort(argv + 1, argc - 1);
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
