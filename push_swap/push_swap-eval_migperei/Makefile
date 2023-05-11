
NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror -g

SOURCES  = ./src/operations/push.c \
		   ./src/operations/reverse.c \
		   ./src/operations/rotate.c \
		   ./src/operations/swap.c \
		   ./src/main.c \
		   ./src/sorting/algorit01.c \
		   ./src/sorting/algorit02.c \
		   ./src/sorting/algorit03.c \
		   ./src/utils/free.c \
		   ./src/utils/ft_libft.c \
		   ./src/utils/ft_split.c \
		   ./src/utils/push_swap_utils01.c \
		   ./src/utils/push_swap_utils02.c \



OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean:
	rm -rf ./src/*.o
	rm -rf ./src/operations/*.o
	rm -rf ./src/sorting/*.o
	rm -rf ./src/utils/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
