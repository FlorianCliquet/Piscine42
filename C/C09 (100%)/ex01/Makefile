# VARIABLES
NAME = libft.a # NOM DU FICHIER
SRCS_DIR = srcs/ # FOLDER DES FONCTIONS
INCLUDES_DIR = ./includes # FOLDER DES INCLUDES
MY_SOURCES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c # SOURCE FILES
MY_OBJECTS = $(addprefix srcs/, ${MY_SOURCES:.c=.o}) # Translate to object files
CFLAGS = -Wall -Werror -Wextra -c -I # CFLAGS
COMPIL = gcc # COMPILATEUR

# REGLES
.c.o:
	$(COMPIL) $(CFLAGS) $(INCLUDES_DIR) $< -o ${<:.c=.o}

${NAME}:	${MY_OBJECTS}
		ar -rcs $@ $^
all:	${NAME}

clean:
	rm -f ${MY_OBJECTS}
fclean: clean
		rm -f ${NAME}
re:	fclean all
# PRE REQUIS
.PHONY: all clean fclean re
