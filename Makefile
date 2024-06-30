NAME = push_swap

SRCS = args/ps_arg_check.c \
		args/ps_stack_create.c \
		cmds/ps_cmds1.c \
		cmds/ps_cmds2.c \
		cmds/ps_cmds3.c \
		cmds/ps_cmds4.c \
		sort/ps_sort.c \
		sort/radix_sort.c \
		utils/ps_utils1.c \
		utils/ps_utils2.c \
		utils/ps_utils3.c \
		utils/ps_utils4.c \
		push_swap.c

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

RM = rm -rf

all: ${NAME} ${CHECK}
${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean: 
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re