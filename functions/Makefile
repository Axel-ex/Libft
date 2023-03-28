NAME = libft.a

SRCS = ${wildcard *.c}

OBJS = ${SRCS:.c=.o}

RED =  \033[38;5;196m
GREEN = \033[38;5;47m
YELLOW = \033[38;5;226m
CYAN = \033[0;36m
RESET = \033[0m

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

%.o: %.c
	${CC} ${CFLAGS} -I includes -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	@echo "${GREEN}${NAME} was created ${RESET}"

all: ${NAME}

clean:
	rm -rf ${OBJS}
	@echo "${YELLOW}All objects files were deleted ${RESET}"

fclean: clean
	rm -rf {NAME}
	@echo "${RED}${NAME} was deleted ${RESET}"

re: fclean all

.PHONY: all clean fclean re cofee
