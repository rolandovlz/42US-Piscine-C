/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:39:04 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/13 23:21:01 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy_tail(char *dest, char src[], int offset)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(src) - offset;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0')
		dest[i] = src[j];
	return (dest);
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int negative_mult;

	n = 0;
	i = 0;
	negative_mult = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		negative_mult = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] < '0' || str[i] > '9')
			return (n * negative_mult);
		n = 10 * n + (str[i] - '0');
		i++;
	}
	return (n * negative_mult);
}
