NAME = get_next_line

SRC = get_next_line.c get_next_line_utils.c
OBJ = $(SRC:.c=.o)

SRC_BON= get_next_line_bonus.c get_next_line_utils_bonus.c
OBJ_BON= $(SRC_BON:.c=.o)

CFLAGS = -Wall -Wextra -Werror

GREEN = \033[38;5;47m
YELLOW = \033[38;5;226m
RED =  \033[38;5;196m
RESET = \033[0m

%.o: %.c
	cc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	echo "$(GREEN)$(NAME) was created$(RESET)"

all: $(NAME)

bonus:$(OBJ_BON)
	ar rcs $(NAME) $(OBJ_BON)

clean: 
	rm -rf $(OBJ) $(OBJ_BON)
	echo "$(YELLOW) all the objects were removed $(RESET)"

fclean: clean
	rm -rf $(NAME)
	echo "$(RED)$(NAME) was removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re

