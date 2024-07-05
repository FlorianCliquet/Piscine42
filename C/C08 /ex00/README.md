# ft.h

## Introduction
The `ft.h` header file defines several functions used in C programming. Each function serves a specific purpose and is typically implemented in corresponding source files (`*.c` files). This header file provides function prototypes for utility functions like outputting characters (`ft_putchar`), swapping integers (`ft_swap`), outputting strings (`ft_putstr`), determining string length (`ft_strlen`), and comparing strings (`ft_strcmp`).

## Problem Understanding
The main objective of `ft.h` is to declare function prototypes for various utility functions that can be used across different C programs. By including this header file (`#include "ft.h"`) in a C source file (`*.c`), these functions become accessible for use in that file. This helps in organizing and reusing common functionalities throughout different C programs.

## Functions Defined
1. **ft_putchar**:
   - `void ft_putchar(char c)`: Outputs a single character `c` to the standard output (`stdout`).

2. **ft_swap**:
   - `void ft_swap(int *a, int *b)`: Swaps the values of integers pointed to by `a` and `b`.

3. **ft_putstr**:
   - `void ft_putstr(char *str)`: Outputs the string `str` to the standard output (`stdout`).

4. **ft_strlen**:
   - `int ft_strlen(char *str)`: Computes and returns the length of the string `str`.

5. **ft_strcmp**:
   - `int ft_strcmp(char *s1, char *s2)`: Compares two strings `s1` and `s2` and returns an integer less than, equal to, or greater than zero if `s1` is found to be lexicographically less than, equal to, or greater than `s2`, respectively.

## Header Guard
The header file includes a header guard (`#ifndef FT_H ... #endif`) to prevent multiple inclusions of the same header file within a single translation unit, ensuring that its contents are only processed once by the preprocessor.

## How to Use the Header File
To use the functions declared in `ft.h`:
- Ensure that `ft.h` is included (`#include "ft.h"`) at the beginning of the C source file where these functions are needed.
- Implement each function (e.g., `ft_putchar.c`, `ft_swap.c`, etc.) separately and compile them along with the main program file.

## Example Usage
Assume the following `main.c` file that utilizes functions declared in `ft.h`:
```c
#include "ft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, world!";
    int a = 10, b = 20;

    ft_putstr(str);
    ft_putchar('\n');
    ft_swap(&a, &b);
    printf("Swapped values: a = %d, b = %d\n", a, b);

    return 0;
}
