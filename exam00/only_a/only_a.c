/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <rolandovlz@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 18:09:14 by exam              #+#    #+#             */
/*   Updated: 2017/06/30 18:14:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char a = 'a';
	write(1, &a, 1);
	return (0);
}
