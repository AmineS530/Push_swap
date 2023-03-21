NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -c

SRC = heart.c \
	parsing.c \
	parsing_2.c \
	Utils/tools.c \
	Utils/tools_2.c \
	stacks.c \
	sort.c \
	sort_utils.c \
	operations/op_swap.c \
	operations/op_push.c \
	operations/op_rotate.c \
	operations/op_rev_rotate.c \

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
