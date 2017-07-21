# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 19:32:18 by rvelez            #+#    #+#              #
#    Updated: 2017/07/11 16:21:12 by rvelez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECT_FILES = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

LIB = libft.a

all: compile lib

lib:
	@ar rc $(LIB) $(OBJECT_FILES)
	@ranlib $(LIB)

compile:
	@gcc  -c $(FILES) -Wall -Wextra -Werror -Iincludes  

clean:
	@/bin/rm -f $(OBJECT_FILES)

fclean: clean
	@/bin/rm -f $(LIB)

re: fclean all
