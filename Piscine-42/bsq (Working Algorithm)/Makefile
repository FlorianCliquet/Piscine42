# VARIABLES
NAME = bsq
SRC_DIR = srcs
MY_SOURCES = $(wildcard $(SRC_DIR)/*.c)
MY_OBJECTS = $(MY_SOURCES:.c=.o)
INCLUDES = -I headers
CFLAGS = -Wall -Werror -Wextra
CC = gcc

# RULES
all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(CC) $(INCLUDES) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
