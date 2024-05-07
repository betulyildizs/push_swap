NAME	= pushswap.a

FILES	= ft_printf.c \
		  ft_data_type.c \
		  ft_print_functions.c \
		  ft_calculate_length.c \
		  ft_print_pointer.c \
		  ft_print_hex.c \
		  push_swap_utils.c \
		  create_stack.c \

CC		= gcc

CFLAGS  = -Wall -Werror -Wextra

OFILES	= $(FILES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar -r -c $(NAME) $(OFILES)

all: $(NAME)

clean:
		rm -f $(OFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
