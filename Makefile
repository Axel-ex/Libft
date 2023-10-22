NAME		=	libft.a

SRC_DIR		=	srcs

SRCS		=	$(wildcard $(SRC_DIR)/*.c)\
	   get_next_line/get_next_line.c\
	   get_next_line/get_next_line_utils.c\
	   ft_printf/ft_printf.c\
	   ft_printf/ft_printnb.c\
	   ft_printf/ft_printptr.c\
       ft_printf/ft_printstr.c\
       ft_printf/ft_printunsigned.c\
       ft_printf/ft_printhexa.c\

OBJ_DIR		=	obj

OBJ			=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

RED =  \033[38;5;196m
GREEN = \033[38;5;47m
YELLOW = \033[38;5;226m
CYAN = \033[0;36m
RESET = \033[0m

FLAGS		= -Wall -Wextra -Werror

GREEN		= \033[38;5;47m
YELLOW		= \033[38;5;226m
RED			= \033[38;5;196m
RESET 		= \033[0m

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@cc $(FLAGS) -g -c $< -o $@
	@echo "[$(GREEN)compiling$(RESET)]: $<"

all: $(NAME)
	@echo "$(GREEN)$(NAME) created$(RESET)"

${NAME}: ${OBJ}
	@ar rcs ${NAME} ${OBJ}
	@echo "[$(GREEN)compiling$(RESET)]: ft_printf"
	@echo "[$(GREEN)compiling$(RESET)]: get_next_line"

$(OBJ_DIR):
	@mkdir obj/

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)Removing objects files$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)removing $(NAME) executable$(RESET)"

re: fclean all

.PHONY: all clean fclean re