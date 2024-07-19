# VARIABLES
NAME = ft_hexdump
SRC_DIR = srcs
MY_SOURCES = ft_2.c print_hex.c check.c display.c ft_0.c ft_1.c ft_hexdump.c get_bytes.c get_option.c main.c print_sentence.c write.c
MY_OBJECTS = $(addprefix srcs/, ${MY_SOURCES:.c=.o})
INCLUDES = -I headers
CFLAGS = -Wall -Werror -Wextra
CC = gcc

# RULES
all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(CC) $(INCLUDES) $(CFLAGS) $^ -o $@ -g3

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -g3

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
