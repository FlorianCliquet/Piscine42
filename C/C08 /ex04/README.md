# ft_strs_to_tab.c

## Introduction
The `ft_strs_to_tab.c` file contains functions to convert an array of strings (`char **av`) into an array of structures (`t_stock_str *`) defined in `ft_stock_str.h`. Each structure (`t_stock_str`) in the array contains information about a string, including its original pointer (`str`), its length (`size`), and a duplicate (`copy`) of the string.

## Problem Understanding
The primary objective of `ft_strs_to_tab.c` is to convert an array of strings (`av`) into an array of structures (`t_stock_str *`) where each structure stores:
- `str`: The original string pointer (`av[i]`).
- `size`: The length of the string (`size(av[i])`).
- `copy`: A duplicate of the string (`ft_strdup(av[i])`).

This conversion allows for easier manipulation and access to information about each string within the array.

## Functions and Structure Definition
1. **ft_strdup Function**:
   - `char *ft_strdup(char *src)`: Allocates memory and duplicates the string `src`. Returns a pointer to the duplicated string.

2. **ft_strs_to_tab Function**:
   - `struct s_stock_str *ft_strs_to_tab(int ac, char **av)`: Converts an array of strings (`av`) into an array of `t_stock_str` structures. It allocates memory for the array of structures, initializes each structure with the appropriate information (`str`, `size`, and `copy`), and returns a pointer to the array of structures.

## Memory Management
- **Memory Allocation**: The `ft_strs_to_tab` function allocates memory dynamically for the array of `t_stock_str` structures based on the number of strings (`ac`). Each `copy` field within the structure is allocated using `ft_strdup` to ensure that modifications to the copied strings do not affect the original strings.

## How to Use the Code
To use the functions defined in `ft_strs_to_tab.c`:
- Include `"ft_stock_str.h"` at the beginning of your source file where the `t_stock_str` structure is defined.
- Call `ft_strs_to_tab(ac, av)` with the appropriate arguments (`ac` as the number of strings, and `av` as the array of string pointers).
- Manipulate the returned array of `t_stock_str` structures (`ptr`) to access information about each string (`str`, `size`, and `copy`).

## Example Usage
Assume the following `main.c` file that demonstrates the usage of `ft_strs_to_tab`:
```c
#include <stdio.h>
#include "ft_stock_str.h"

int main(int argc, char **argv)
{
    t_stock_str *tab;
    int i;

    tab = ft_strs_to_tab(argc - 1, argv + 1);
    i = 0;
    while (tab[i].str)
    {
        printf("String: %s\n", tab[i].str);
        printf("Size: %d\n", tab[i].size);
        printf("Copy: %s\n", tab[i].copy);
        i++;
    }

    return 0;
}
```
This example demonstrates how ft_strs_to_tab can be used to convert an array of command-line arguments (argv) into an array of t_stock_str structures and print information about each string.

