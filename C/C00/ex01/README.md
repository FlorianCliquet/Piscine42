# ft_print_alphabet

## Overview

This exercise involves writing a simple function, `ft_print_alphabet`, that displays the lowercase alphabet. This function is part of the curriculum at 42, a programming school. The task requires the use of the `write` system call to output the characters to the standard output (usually the terminal).

## Requirements

- The function should be named `ft_print_alphabet`.
- The function should be prototyped as `void ft_print_alphabet(void);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_print_alphabet.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_print_alphabet` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
```

## Function Prototype
```c
void ft_print_alphabet(void);
```

[details of write function](../ex00/README.md)