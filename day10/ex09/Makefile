# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 19:32:18 by rvelez            #+#    #+#              #
#    Updated: 2017/07/11 05:25:19 by rvelez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/*.c 

all: $(NAME) 

$(NAME):
	@gcc -Wall -Wextra -Werror -Iincludes -o $(NAME) $(SRC)

clean: 
	@/bin/rm -f $(NAME) ; \

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
