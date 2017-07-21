/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 14:05:45 by rvelez            #+#    #+#             */
/*   Updated: 2017/06/30 22:47:33 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	aux;
	int	length;
	int	i;

	length = 0;
	while (str[length])
		length++;
	length--;
	i = 0;
	while (i < length)
	{
		aux = *(str + i);
		*(str + length) = *(str + i);
		*(str + i) = aux;
	}
	return (str);
}
