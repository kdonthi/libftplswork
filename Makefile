NAME = libft.a

all:$(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -rf $(NAME)
re:fclean all
