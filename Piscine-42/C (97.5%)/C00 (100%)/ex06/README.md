# ft_print_comb2

## Overview

This exercise involves writing a function, `ft_print_comb2`, that displays all unique combinations of two pairs of digits in ascending order. Each combination should be separated by a comma and a space, except the last one. This function is part of the curriculum at 42, a programming school. The task requires the use of the `write` system call to output the combinations to the standard output (usually the terminal).

## Requirements

- The function should be named `ft_print_comb2`.
- The function should be prototyped as `void ft_print_comb2(void);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_print_comb2.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_print_comb2` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void print_combination(char a, char b, char c, char d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
    if (!(a == '9' && b == '8'))
    {
        write(1, ", ", 2);
    }
}

void whileloop(char a, char b, char c, char d)
{
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            c = a;
            d = b + 1;
            while (c <= '9')
            {
                while (d <= '9')
                {
                    print_combination(a, b, c, d);
                    d++;
                }
                c++;
                d = '0';
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    b = '0';
    c = '0';
    d = '0';
    whileloop(a, b, c, d);
}
```
## Implementation Details
- The function print_combination is used to print each combination of two pairs of digits (a, b, c, and d).
    - The digits are printed in the format ab cd.
    - After each combination (except the last one, which is '98 99'), a comma and a space are printed.
- The function whileloop generates and prints all combinations of pairs of digits (a, b, c, and d) using nested while loops.
    - The outermost loop iterates over the first pair (a and b).
    - The middle loop sets c to a and iterates over the second pair (c and d).
    - The innermost loop iterates over d to generate all combinations for the second pair.

## Further Explanation of the First Two Iterations
During the execution of ft_print_comb2, the function performs a series of nested loops to generate and print all possible combinations of two pairs of digits (a, b, c, and d) in ascending order.

### First Iteration
- Outer Loop (a): Starts with a = '0'.
- Middle Loop (b): Iterates over values from '0' to '9'.
- Inner Loops (c and d): For each combination of (a, b), initializes c to a and d to b + 1. Then, c is incremented while d iterates from '0' to '9'.
    - Exemple:
            - For the first iteration (a = '0', b = '0'):
                - c starts at '0' and d starts at '1'.
                - Inner loop prints combinations like 00 01, 00 02, ..., 00 09.

### Second Iteration
- Outer Loop (a): Increments to a = '1'.
- Middle Loop (b): Starts again from '0' and iterates over values from '0' to '9'.
- Inner Loops (c and d): Similarly, for each combination of (a, b), initializes c to a and d to b + 1. Then, c is incremented while d iterates from '0' to '9'.
    - Exemple:
        - For the second iteration (a = '1', b = '0'):
            - c starts at '1' and d starts at '1'.
            - Inner loop prints combinations like 10 11, 10 12, ..., 10 19.
Each iteration of ft_print_comb2 generates and prints unique pairs of digits in ascending order, following the format specified (ab cd). The output continues until all valid combinations are printed, ensuring correct formatting with commas and spaces between pairs.

