# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/12 13:21:50 by fbafica           #+#    #+#              #
#    Updated: 2021/08/26 15:23:07 by fbafica          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc

PROJECT_INCLUDE = ./includes/
PROJECT_FLAGS = -Wall -Wextra -Werror
C_SOURCES_PATH = ./src/
C_SOURCES = main.c assets_load.c map_check.c map_check_utils1.c map_check_utils2.c \
			map_init.c map_load.c win_init.c keyboard_get.c keyboard_handler.c \
			expose_get_handler.c quit_handler.c error_messages1.c error_messages2.c

LIBFT_INCLUDE = ./Libft/includes/
LIBFT = ./Libft/libft.a

MLX = ./mlx_linux/libmlx_Linux.a
MLX_INCLUDE = ./mlx_linux/
MLX_FLAGS = -lmlx -lXext -lX11


all: $(NAME)

$(NAME): $(addprefix $(C_SOURCES_PATH), $(C_SOURCES)) $(LIBFT) $(MLX)
	@$(CC) $^ -I $(PROJECT_INCLUDE) -I $(MLX_INCLUDE) -I$(LIBFT_INCLUDE) -L $(MLX_INCLUDE) $(PROJECT_FLAGS) $(MLX_FLAGS) -o so_long

$(LIBFT):
	@make -C Libft

$(MLX):
	@make -C mlx_linux

clean:
	@make clean -C Libft
	@make clean -C mlx_linux

fclean: clean
	@make fclean -C Libft
	@rm -f $(NAME)

re: fclean all