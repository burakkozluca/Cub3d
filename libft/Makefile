# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 18:34:35 by ysensoy           #+#    #+#              #
#    Updated: 2023/02/25 12:08:41 by mtemel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ = $(FILES:.c=.o)

BSRC	= $(wildcard ft_lst*.c)
B_OBJ	= $(BSRC:%.c=%.o)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re