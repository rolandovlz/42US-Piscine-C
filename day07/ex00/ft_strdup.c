/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:39:54 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/06 15:07:55 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*dup;

	length = 0;
	while (src[length])
		length++;
	dup = (char *)malloc(length);
	length = 0;
	while (src[length])
	{
		dup[length] = src[length];
		length++;
	}
	return (dup);
}
