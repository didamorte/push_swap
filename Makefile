NAME	:= push_swap
CC		:= gcc
FLAGS	:= -Wall -Wextra -Werror -g

# Library Paths - No Spaces Around '='
LIBFT_DIR	:= libft
PRINTF_DIR	:= $(LIBFT_DIR)/ft_printf

# Source Files
SRCS := push_swap.c \
		ps_swap.c \
		ps_push.c \
		ps_rotate.c \
		ps_reverse.c \
		radix.c \
		normalize.c \
		error.c

OBJS := $(SRCS:.c=.o)

# Explicit Library Paths
LIBFT_A		:= $(LIBFT_DIR)/libft.a
PRINTF_A	:= $(PRINTF_DIR)/libftprintf.a

# Main Target
all: libft ft_printf $(NAME)

# Executable Creation
$(NAME): $(OBJS)
	@echo "Compiling $(NAME)..."
	$(CC) $(FLAGS) -o $@ $^ $(LIBFT_A) $(PRINTF_A)

# Library Compilation
libft:
	$(MAKE) -C $(LIBFT_DIR)

ft_printf: libft
	$(MAKE) -C $(PRINTF_DIR)

# Compilation Rule
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Cleaning Rules
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft ft_printf