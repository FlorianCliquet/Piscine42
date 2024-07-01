# ft_putchar

## Overview

This exercise involves writing a simple function, `ft_putchar`, that displays a single character passed as a parameter. This function is part of the curriculum at 42, a programming school. The task requires the use of the `write` system call to output the character to the standard output (usually the terminal).

## Requirements

- The function should be named `ft_putchar`.
- The function should be prototyped as `void ft_putchar(char c);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_putchar.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_putchar` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
```

## Function Prototype
```c
void ft_putchar(char c);
```

## Parameters
- c: The character to be displayed.

## Implementation Details
- The function write is used to write the character c to the file descriptor 1, which is the standard output.
- The write function takes three parameters:
    1. File descriptor (1 for standard output)
    2. Pointer to the data to be written (address of c)
    3. Number of bytes to write (1 byte for a single character)
