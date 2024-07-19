#VARIABLES
NAME = ft_tail
MY_SOURCES = main.c file_reader.c ft_display.c ft_tail.c ft.c ft_tail_helper.c ft_display_dir.c
MY_OBJECTS = ${MY_SOURCES:.c=.o}
CFLAGS = -Wall -Werror -Wextra
CC = gcc

#REGLES

all:	${NAME}

${NAME}:	${MY_OBJECTS}
		${CC} ${CFLAGS} $^ -o $@ -g3

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -g3

clean:
		rm -rf ${MY_OBJECTS}
fclean:		clean
		rm -f ${NAME}
re:	fclean all

.PHONY:	all clea fclean re
