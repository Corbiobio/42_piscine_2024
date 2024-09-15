# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 15:27:01 by almeekel          #+#    #+#              #
#    Updated: 2024/08/25 23:26:59 by almeekel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = cc
CFLAG = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
OBJ_FILES = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: fclean all

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
		  