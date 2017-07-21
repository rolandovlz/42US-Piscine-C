/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgollwit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 09:30:08 by zgollwit          #+#    #+#             */
/*   Updated: 2017/07/19 23:32:00 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*map_str;

	i = 1;
	map_str = 0;
	if (argc == 1)
		stdin_helper();
	while (i < argc)
	{
		map_str = redirect_out(argv[i]);
		if (check_valid(map_str) == 1)
		{
			main_helper(map_str);
			free(map_str);
		}
		else
		{
			write(2, "map error", 10);
			if (i == argc - 1)
				ft_putchar('\n');
		}
		if (++i != argc)
			ft_putchar('\n');
	}
	return (0);
}
