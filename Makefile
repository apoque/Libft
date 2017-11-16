# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apoque <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 18:56:29 by apoque            #+#    #+#              #
#    Updated: 2017/11/08 18:56:33 by apoque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c -Iincludes

all : $(NAME)

obj :
	mkdir objs
	gcc $(FLAGS) src/*.c
	mv *.o objs	

$(NAME) : obj
	ar -rc $(NAME) objs/*.o

clean :
	rm -rf objs

fclean : clean
	rm -rf $(NAME)

re : fclean all
