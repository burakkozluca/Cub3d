# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 18:34:35 by bkozluca          #+#    #+#              #
#    Updated: 2023/05/06 10:56:38 by bkozluca         ###   ########.fr        #
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