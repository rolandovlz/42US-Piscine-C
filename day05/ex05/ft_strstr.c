/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:17:30 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/04 14:57:26 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *temp_str;
	char *temp_to_find;

	temp_str = str;
	temp_to_find = to_find;
	if (str[0] == '\0' && to_find[0] != '\0')
		return (0);
	while (*temp_to_find != 0)
	{
		if (*temp_to_find == *temp_str)
		{
			temp_str++;
			temp_to_find++;
		}
		else
		{
			temp_to_find = to_find;
			temp_str = ++str;
			if (*temp_str == 0)
				return (0);
		}
	}
	return (str);
}
