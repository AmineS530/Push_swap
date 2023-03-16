NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -c

SRC = heart.c \
	parsing.c \
	tools.c \
	stacks.c \

OBJ = $(SRC:.c=.o)

LIBFT = Utils/libft/

LIBFT_PATH = Utils/libft/libft.a

$(NAME): $(OBJ) $(LIBFT_PATH)
	$(CC) $(OBJ) $(LIBFT_PATH) -o $(NAME)

$(LIBFT_PATH):
	make -C $(LIBFT)

%.o : %.c swap_push.h
	$(CC) $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
