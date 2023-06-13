# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 12:28:00 by bkozluca          #+#    #+#              #
#    Updated: 2023/05/06 10:59:03 by bkozluca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OS = $(shell uname)
ifeq ($(OS), Darwin)
MINILIBX = minilibx
CFLAGS = -lmlx -framework OpenGL -framework AppKit -L ./$(MINILIBX)
else
MINILIBX = mlx
CFLAGS	:= -Wall -Werror -Wextra -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz -L ./$(MINILIBX)
endif
NAME = Cub3d
SRC = $(wildcard src/*.c) $(wildcard get_next_line/*.c) libft/libft.a
CC = gcc
OBJ = $(SRC: .c = .o)

$(NAME): $(OBJ)
	@cd libft && make && cd ..
	@cd $(MINILIBX) && make && cd ..
	$(CC) $(SRC) $(CFLAGS) -o Cub3d
	@echo "\033[1;92mCOMPILING SUCCESSFUL\033[0m"

all : $(NAME)

clean:
	@rm -rf Cub3d
	@echo "\033[1;92mCLEANING DONE\033[0m"

fclean:
	@echo "\033[1;92mFCLEAN\033[0m"
	@make clean

re:
	@cd libft && make re && cd ..
	@cd $(MINILIBX) && make re && cd ..
	@echo "\033[1;92mREMAKE\033[0m"
	@make fclean
	@make
