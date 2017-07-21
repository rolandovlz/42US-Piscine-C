/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 05:08:27 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/07 05:57:26 by rvelez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

enum	e_prof
{
	SAVE_AUSTIN_POWERS
};

typedef struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	enum e_prof	profession;
}				t_perso;

#endif
