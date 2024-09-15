NAME = libft.a
CC = cc

C_DIR = srcs/
H_DIR = includes/ft.h

C_FILE = ${C_DIR}ft_putchar.c\
		${C_DIR}ft_swap.c\
		${C_DIR}ft_putstr.c\
		${C_DIR}ft_strlen.c\
		${C_DIR}ft_strcmp.c
OBJ = ${C_FILE:%.c=%.o}

CFLAGS = -Wall -Wextra -Werror -I ${H_DIR}

all: ${NAME}

%.c: %.o
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:  ${OBJ} 
	ar -rc ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
