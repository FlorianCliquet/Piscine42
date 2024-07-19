# build_libft.sh

## Introduction
The `build_libft.sh` script is a shell script used for compiling and creating a static library (`libft.a`) from several C source files (`ft_putchar.c`, `ft_swap.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c`). After creating the static library, it removes the object files generated during the compilation process.

## Problem Understanding
The primary objective of `build_libft.sh` is to automate the process of compiling multiple C source files into object files, archiving them into a static library (`libft.a`), and then cleaning up the intermediate object files.

## Script Breakdown
1. **Script Header**:
   - `#!/bin/sh`: Specifies that the script should be executed using the Bourne shell.

2. **Error Handling**:
   - `set -e`: Ensures that the script exits immediately if any command fails (`-e` option).

3. **Compilation**:
   - `cc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c -Wall -Wextra -Werror`: Compiles each of the C source files (`ft_putchar.c`, `ft_swap.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c`) into their corresponding object files (`ft_putchar.o`, `ft_swap.o`, `ft_putstr.o`, `ft_strlen.o`, `ft_strcmp.o`). It also includes flags `-Wall`, `-Wextra`, `-Werror` for enabling warnings as errors.

4. **Static Library Creation**:
   - `ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o`: Archives the compiled object files (`ft_putchar.o`, `ft_swap.o`, `ft_putstr.o`, `ft_strlen.o`, `ft_strcmp.o`) into a static library named `libft.a` using the `ar` command:
     - `ar`: Archiver utility for creating static libraries.
     - `rcs`: Options for creating (`r`), replacing (`c`), and generating an index (`s`) for the library.
     - `libft.a`: Name of the static library.
     - `ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o`: List of object files to include in the static library.

5. **Cleanup**:
   - `rm -rf ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o`: Removes the intermediate object files (`ft_putchar.o`, `ft_swap.o`, `ft_putstr.o`, `ft_strlen.o`, `ft_strcmp.o`) after they have been archived into `libft.a`.

## Usage
To use the `build_libft.sh` script:
- Ensure the script has execute permissions (`chmod +x build_libft.sh`).
- Run the script using `./build_libft.sh` from the command line.

## Example Usage
Assume the script is placed in the same directory as the C source files (`ft_putchar.c`, `ft_swap.c`, etc.). Running `./build_libft.sh` in the terminal would compile these files into object files, create a static library `libft.a`, and then remove the object files.

## Conclusion
Understanding `build_libft.sh` involves recognizing its purpose in automating the compilation and static library creation process for a set of C source files. By leveraging shell scripting (`#!/bin/sh`), `ar` for archiving, and `rm` for cleanup, developers can efficiently manage and build static libraries in Unix-based environments.

