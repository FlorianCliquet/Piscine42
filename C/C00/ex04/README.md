# ft_is_negative

## Overview

This exercise involves writing a function, `ft_is_negative`, that displays 'P' if the integer passed as a parameter is non-negative and 'N' if it is negative. This function is part of the curriculum at 42, a programming school. The task requires the use of the `write` system call to output the character to the standard output (usually the terminal).

## Requirements

- The function should be named `ft_is_negative`.
- The function should be prototyped as `void ft_is_negative(int n);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_is_negative.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_is_negative` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void ft_is_negative(int n)
{
    char c;

    if (n >= 0)
    {
        c = 'P';
    }
    else
    {
        c = 'N';
    }
    write(1, &c, 1);
}
```
## Function Prototype

```c
void ft_is_negative(int n);
```
## Parameters
- n: The integer to be checked.

## Implementation Details

- The function uses an if statement to check whether n is non-negative (i.e., n >= 0).
    - If n is non-negative, the variable c is assigned the value 'P'.
    - If n is negative, the variable c is assigned the value 'N'.
- The write function is then used to write the character stored in c to the file descriptor 1, which is the standard output.