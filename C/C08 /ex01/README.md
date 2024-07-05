# ft_boolean.h

## Introduction
The `ft_boolean.h` header file defines macros and typedefs related to boolean values and operations in C programming. It introduces a custom boolean type (`t_bool`), along with macros for boolean values (`TRUE` and `FALSE`). Additionally, it provides a macro for checking even numbers (`EVEN(X)`), and constants (`SUCCESS`, `EVEN_MSG`, `ODD_MSG`) used for output messages based on the number of arguments.

## Problem Understanding
The main objective of `ft_boolean.h` is to define boolean operations and constants that can be used across different C programs. It introduces a custom boolean type (`t_bool`) and provides macros to check if a number is even (`EVEN(X)`). It also defines output messages (`EVEN_MSG` and `ODD_MSG`) based on whether the number of arguments is even or odd.

## Definitions and Macros
1. **t_bool**:
   - `typedef char t_bool;`: Defines a custom boolean type `t_bool` as `char`.

2. **TRUE and FALSE**:
   - `#define TRUE 1` and `#define FALSE 0`: Define macros for boolean values `TRUE` (1) and `FALSE` (0).

3. **EVEN(X)**:
   - `#define EVEN(X) ((X % 2) ? 0 : 1)`: Macro to determine if a number `X` is even (`1` if true, `0` if false).

4. **Constants**:
   - `#define SUCCESS 0`: Constant representing a successful operation.
   - `#define EVEN_MSG "I have an even number of arguments.\n"`: Message to print if the number of arguments is even.
   - `#define ODD_MSG "I have an odd number of arguments.\n"`: Message to print if the number of arguments is odd.

## Header Guard
The header file includes a header guard (`#ifndef FT_BOOLEAN_H ... #endif`) to prevent multiple inclusions of the same header file within a single translation unit, ensuring that its contents are only processed once by the preprocessor.

## How to Use the Header File
To use the macros and typedefs defined in `ft_boolean.h`:
- Include `ft_boolean.h` (`#include "ft_boolean.h"`) at the beginning of a C source file where boolean operations and constants are needed.
- Utilize `t_bool` for boolean variables, `TRUE` and `FALSE` for boolean values, `EVEN(X)` to check if a number is even, and `SUCCESS`, `EVEN_MSG`, and `ODD_MSG` for respective output messages.

## Example Usage
Assume the following `main.c` file that utilizes macros and typedefs defined in `ft_boolean.h`:
```c
#include "ft_boolean.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_bool is_even = EVEN(argc - 1);

    if (is_even == TRUE)
        ft_putstr(EVEN_MSG);
    else
        ft_putstr(ODD_MSG);

    return SUCCESS;
}
```
This example demonstrates how ft_boolean.h can be used to determine if the number of command-line arguments (argc) is even or odd and print the corresponding message (EVEN_MSG or ODD_MSG).

