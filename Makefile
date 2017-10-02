NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c -Iincludes

all : $(NAME)

obj :
	gcc $(FLAGS) src/*.c
	mv *.o objs	

$(NAME) : obj
	ar -rc $(NAME) objs/*.o

clean :
	rm -rf objs/*.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
