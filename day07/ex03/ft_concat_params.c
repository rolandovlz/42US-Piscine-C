/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:34:23 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/06 21:37:37 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		size;
	char	*single_string;

	i = 1;
	size = 0;
	while (i < argc)
		size += ft_strlen(argv[i]) + 1;
	single_string = malloc(size);
	i = 1;
	while(i < argc)
	{
		single_string =
	}
}
