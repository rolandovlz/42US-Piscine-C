# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 03:16:24 by rvelez            #+#    #+#              #
#    Updated: 2017/07/13 22:18:18 by rvelez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -Iincludes -o $(NAME) srcs/$(NAME).c srcs/ft_helper.c

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
