NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -c

SRC = heart.c \
	parsing.c \

OBJ = $(SRC:.c=.o)

LIBFT = Utils/libft/

FT_PRINTF = Utils/ft_printf/

LIBFT_PATH = Utils/libft/libft.a

FT_PRINTF_PATH = Utils/ft_printf/libftprintf.a

$(NAME): $(OBJ) $(LIBFT_PATH) $(FT_PRINTF_PATH)
	$(CC) $(OBJ) $(LIBFT_PATH) $(FT_PRINTF_PATH) -o $(NAME)

$(LIBFT_PATH):
	make -C $(LIBFT)

$(FT_PRINTF_PATH):
	make -C $(FT_PRINTF)

%.o : %.c swap_push.h
	$(CC) $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT) clean
	make -C $(FT_PRINTF) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT) fclean
	make -C $(FT_PRINTF) fclean

re: fclean all

.PHONY: all clean fclean re
