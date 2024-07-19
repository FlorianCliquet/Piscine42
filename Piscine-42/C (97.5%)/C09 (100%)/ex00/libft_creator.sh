#!/bin/sh

set -e

cc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c -Wall -Wextra -Werror

ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

rm -rf ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
