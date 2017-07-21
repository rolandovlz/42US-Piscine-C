/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:58:08 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/05 11:57:17 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	s1_len;
	int	s2_len;
	int	i;

	i = 0;
	while (s1[i])
		i++;
	s1_len = i;
	i = 0;
	while (s2[i])
		i++;
	s2_len = i;
	if (s1_len == 0 && s2_len == 0)
		return (0);
	i = 0;
	if (s1_len > 0)
	{
		while (i < s1_len)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (-s2[i]);
}
