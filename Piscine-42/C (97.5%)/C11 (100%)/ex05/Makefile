#VARIABLES
NAME = do-op
MY_SOURCES = main.c ft.c
MY_OBJECTS = ${MY_SOURCES:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CC = gcc

#REGLES

all:	${NAME}

${NAME}:	${MY_OBJECTS}
		${CC} ${CFLAGS} $^ -o $@

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		rm -rf ${MY_OBJECTS}
fclean:		clean
		rm -f ${NAME}
re:	fclean all

.PHONY:	all clea fclean re