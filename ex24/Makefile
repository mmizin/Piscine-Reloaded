NAME = libft.a
SRCS = srcs/*.c
INCLUDES = includes/
CC = gcc -Wall -Wextra -Werror -c $(SRCS) -I$(INCLUDES)

all: $(NAME)

$(NAME):
	$(CC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -rf *~ *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
