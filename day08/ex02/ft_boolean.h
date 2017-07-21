/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:29:25 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/07 23:04:42 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define FALSE 0
# define TRUE 1
# define EVEN_MSG "I have an even number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

typedef	int	t_bool;
#endif
