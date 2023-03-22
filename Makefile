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

SRC_BONUS = Utils/get_next_line/get_next_line_utils.c \
		Utils/get_next_line/get_next_line.c \
		bonus/checker_bonus.c \
		operations_bonus/op_swap_bonus.c \
		operations_bonus/op_push_bonus.c \
		operations_bonus/op_rotate_bonus.c \
		operations_bonus/op_rev_rotate_bonus.c \
		Utils/tools.c \
		Utils/tools_2.c \
		stacks.c \
		parsing.c \
		parsing_2.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

LIBFT = Utils/libft/

LIBFT_PATH = Utils/libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_PATH)
	$(CC) $(OBJ) $(LIBFT_PATH) -o $(NAME)

bonus: $(OBJ_BONUS) $(LIBFT_PATH)
	$(CC) $(OBJ_BONUS) $(LIBFT_PATH) -o checker_bonus

$(LIBFT_PATH):
	make -C $(LIBFT)

%.o : %.c swap_push.h
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)
	make -C $(LIBFT) clean

fclean: clean
	rm -rf $(NAME)
	rm -rf checker_bonus
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
