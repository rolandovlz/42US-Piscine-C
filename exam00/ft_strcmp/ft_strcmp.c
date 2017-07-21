/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 19:06:42 by exam              #+#    #+#             */
/*   Updated: 2017/06/30 20:44:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	s1Len;
	int	s2Len;
	int	i;
	
	i = 0;
	while (s1[i])
		i++;
	s1Len = i;
	i = 0;
	while(s2[i])
		i++;
	s2Len = i;
	if (s1Len == 0 && s2Len == 0)
		return (0);
	i = 0;
	if (s1Len > 0)
	{
		while (i < s1Len)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (- s2[i]);
}
