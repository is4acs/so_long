NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

GNL_DIR = gnl

GNL_SRC = $(wildcard $(GNL_DIR)/*.c)

GNL_OBJS = $(GNL_SRC:.c=.o)

SRC_DIR = srcs

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

MLX_DIR = mlx

MLX_FILES = $(MLX_DIR)/libmlx.a

OBJS = $(SRC_FILES:.c=.o) $(GNL_OBJS)

INCLUDES = -I$(LIBFT_DIR) -I$(GNL_DIR) -I$(SRC_DIR)

LFLAGS = -L$(LIBFT_DIR) -lft -lglfw -framework OpenGL -framework AppKit -framework Cocoa -framework OpenGL -framework IOKit -libmlx -lmlx

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo "Linking $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJS) $(LFLAGS) -o $(NAME)
	@echo "$(NAME) created."

$(LIBFT):
	@echo "Compiling libft..."
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory
	@echo "libft compiled."

.c.o:
	@echo "Compiling $<..."

	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean --no-print-directory
	@echo "Cleaning object files..."
	@rm -f $(OBJS)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean --no-print-directory
	@echo "Cleaning $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re