# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 03:16:24 by rvelez            #+#    #+#              #
#    Updated: 2017/07/13 21:23:06 by rvelez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -Iincludes -o $(NAME) srcs/$(NAME).c

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
