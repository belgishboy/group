NAME	= main

SRC		= main.c

CC		= gcc

FLAGS	= -Wall -Werror -Wextra

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re