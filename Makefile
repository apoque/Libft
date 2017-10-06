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
