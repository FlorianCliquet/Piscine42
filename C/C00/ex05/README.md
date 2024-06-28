# ft_print_comb

## Overview

This exercise involves writing a function, `ft_print_comb`, that displays all unique combinations of three different digits in ascending order. Each combination should be separated by a comma and a space, except the last one. This function is part of the curriculum at 42, a programming school. The task requires the use of the `write` system call to output the combinations to the standard output (usually the terminal).

## Requirements

- The function should be named `ft_print_comb`.
- The function should be prototyped as `void ft_print_comb(void);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_print_comb.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_print_comb` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void loop(char a, char b, char c)
{
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if ((a != '7') || (b != '8') || (c != '9'))
                {
                    write(1, ", ", 2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '0';
    c = '0';
    loop(a, b, c);
}
```
## Function Prototype
```c
void ft_print_comb(void);
```

## Implementation Details
- The function loop is used to generate and print all combinations of three different digits (a, b, and c).
    - a starts from '0' to '7', b starts from a + 1 to '8', and c starts from b + 1 to '9'.
    - Each combination is printed using three write calls to output each digit.
    - After each combination (except the last one), a comma and a space are printed to separate them.

## Further Details
During the first iteration of the loop function:
- a, b, and c are initialized to '0'.
- The outermost loop runs with a = '0'.
- Inside the loop, b starts from a + 1, which is '1'.
- Within the second loop, c starts from b + 1, which is '2'.
- The write function then outputs the characters '012'.
- Since this is not the last combination (a = '0', b = '1', c = '2'), a comma and a space are also written.
This provides an initial output of "012, ", marking the completion of the first iteration of the combination generation.
