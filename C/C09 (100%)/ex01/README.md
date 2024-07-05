# Makefile for Building libft.a

## Introduction
The provided Makefile (`Makefile`) automates the compilation and static library creation (`libft.a`) process for a set of C source files located in the `srcs/` directory (`ft_putchar.c`, `ft_swap.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c`). It includes rules for compiling each source file into object files, archiving them into `libft.a`, and managing cleanup operations.

## Problem Understanding
The primary goal of this Makefile is to streamline the build process of a static library (`libft.a`) from multiple C source files (`ft_putchar.c`, `ft_swap.c`, etc.) stored in the `srcs/` directory. It uses specific variables to define file paths, compiler options (`CFLAGS`), and compilation rules.

## Makefile Breakdown
### Variables
- **NAME**: Specifies the output file name (`libft.a`).
- **SRCS_DIR**: Directory containing the source files (`srcs/`).
- **INCLUDES_DIR**: Directory containing header files (`./includes`).
- **MY_SOURCES**: List of source files to compile (`ft_putchar.c`, `ft_swap.c`, etc.).
- **MY_OBJECTS**: Translated object files from source files (`srcs/ft_putchar.o`, etc.).
- **CFLAGS**: Compilation flags (`-Wall -Werror -Wextra -c -I`).
- **COMPIL**: Compiler command (`gcc`).

### Rules
- **.c.o**: Rule for compiling each `.c` source file into `.o` object files using `gcc` with specified `CFLAGS` and includes directory.
- **${NAME}**: Rule for creating the static library `libft.a` by archiving all object files (`$^` represents all prerequisites).
- **all**: Rule to build the target `libft.a`.
- **clean**: Rule to remove all object files.
- **fclean**: Rule to remove both object files and the static library (`libft.a`).
- **re**: Rule to perform a clean rebuild (`fclean` followed by `all`).

### Prerequisites
- **.PHONY**: Specifies that `all`, `clean`, `fclean`, and `re` are not actual files but rather targets, preventing conflicts with files of the same name.

## Usage
To use the `Makefile`:
1. Ensure it is saved as `Makefile` in the root directory of your project.
2. Run `make` in the terminal to build the `libft.a` static library.
3. Run `make clean` to remove object files.
4. Run `make fclean` to remove both object files and `libft.a`.
5. Run `make re` to perform a clean rebuild of `libft.a`.

## Example Usage
Assume the `Makefile` is placed in the root directory alongside `srcs/` and `includes/` directories. Running `make` would compile all source files into object files, create `libft.a`, and then clean up object files. Subsequent commands (`make clean`, `make fclean`, `make re`) provide additional build and cleanup options.

## Conclusion
Understanding and utilizing the `Makefile` involves leveraging its defined variables, rules, and targets to automate the compilation and static library creation process. By encapsulating build tasks and cleanup operations, developers can efficiently manage and maintain C projects using standard build practices in Unix-based environments.

