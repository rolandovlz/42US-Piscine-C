# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 17:29:27 by rvelez            #+#    #+#              #
#    Updated: 2017/07/16 23:19:47 by rvelez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

eval_expr:	tokens.l grammar.y
			bison -d grammar.y
			flex tokens.l
			gcc -o eval_expr grammar.tab.c ft_helper.c lex.yy.c 

.PHONY : clean
clean:
	/bin/rm grammar.tab.c grammar.tab.h lex.yy.c exp.txt

fclean: clean
	/bin/rm eval_expr
