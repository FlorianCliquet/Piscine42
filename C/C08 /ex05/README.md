# ft_show_tab.c

## Introduction
The `ft_show_tab.c` file contains a function to display the contents of an array of structures (`t_stock_str *`) defined in `ft_stock_str.h`. Each structure (`t_stock_str`) in the array contains information about a string, including its original pointer (`str`), its length (`size`), and a duplicate (`copy`) of the string.

## Problem Understanding
The primary objective of `ft_show_tab.c` is to iterate through an array of `t_stock_str` structures (`par`) and display information about each structure:
- Print the original string (`str`).
- Print the length of the string (`size`).
- Print the duplicate of the string (`copy`).

This function is useful for debugging or displaying information stored in the `t_stock_str` structures after they have been populated by other functions, such as `ft_strs_to_tab`.

## Functions and Structure Definition
1. **len Function**:
   - `int len(char *str)`: Calculates and returns the length of the string `str`.

2. **put_nbr Function**:
   - `void put_nbr(int nbr)`: Prints an integer `nbr` to standard output. Handles negative integers by printing a minus sign first.

3. **ft_show_tab Function**:
   - `void ft_show_tab(struct s_stock_str *par)`: Displays the contents of an array of `t_stock_str` structures (`par`). For each structure:
     - Prints the original string (`par->str`).
     - Prints the length of the string (`par->size`).
     - Prints the duplicate of the string (`par->copy`).

## Memory Management
- **Memory Allocation**: The `ft_show_tab` function does not allocate or deallocate memory. It only accesses and prints information stored in the `t_stock_str` structures.

## How to Use the Code
To use the functions defined in `ft_show_tab.c`:
- Include `"ft_stock_str.h"` at the beginning of your source file where the `t_stock_str` structure is defined.
- Call `ft_show_tab(par)` with the appropriate argument (`par` as the array of `t_stock_str` structures) to display information about each structure.

## Example Usage
Assume the following `main.c` file that demonstrates the usage of `ft_show_tab`:
```c
#include <stdio.h>
#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
    t_stock_str data[3];

    data[0].str = "Hello";
    data[0].size = 5;
    data[0].copy = "Hello";
    
    data[1].str = "World";
    data[1].size = 5;
    data[1].copy = "World";
    
    data[2].str = "42";
    data[2].size = 2;
    data[2].copy = "42";

    ft_show_tab(data);

    return 0;
}
```
This example demonstrates how ft_show_tab can be used to display information stored in an array of t_stock_str structures (data). Each structure contains information about a string (str, size, and copy), which is then printed to standard output.

