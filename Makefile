GCC = gcc

NAME = snake

CFLAGS = -Wall -Wextra -Werror -I/usr/include -Iincludes -L/usr/local/lib -lSDL2 -o $(NAME)

SRCS = srcs/*.c

all:
	$(GCC) $(SRCS) $(CFLAGS) 

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
