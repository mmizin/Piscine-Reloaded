NAME = ft_display_file
SOURCE = *.c
INCLUDES = -I *.h
OBJ = *.o
FLAGS = -c -Wall -Wextra -Werror
CC = gcc
all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SOURCE) $(INCLUDES)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -rf $(OBJ) *.~

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean $(NAME)