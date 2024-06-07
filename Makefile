
FILES = checker.c utils.c utils2.c utils3.c sort.c sort1.c sort2.c push.c swap.c rot.c rrot.c stack.c small.c main.c 

NAME	= push_swap

CC	= cc

CFLAGS	=  -Wall -Wextra -Werror #-g -fsanitize=address

all:	$(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

