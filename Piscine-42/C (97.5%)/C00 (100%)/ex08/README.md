# ft_print_combn

## Overview

The `ft_print_combn` function generates and prints all possible combinations of `n` digits in ascending order. Each combination is separated by a comma and space (", ") except for the last one. This function uses recursion to achieve the generation of combinations and outputs them using the `write` system call. It is part of the curriculum at 42, a programming school.

## Requirements

- The function should be named `ft_print_combn`.
- The function should be prototyped as `void ft_print_combn(int n);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_print_combn.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_print_combn` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void ft_print_combn_recursive(char t[], int n, int index, int start)
{
    int i;

    if (index == n)
    {
        write(1, t, n);
        if (t[0] != '9' - n + 1 || t[n - 1] != '9')
        {
            write(1, ", ", 2);
        }
        return ;
    }
    i = start;
    while (i <= '9')
    {
        t[index] = i;
        ft_print_combn_recursive(t, n, index + 1, i + 1);
        i++;
    }
}

void ft_print_combn(int n)
{
    char t[10];

    if (n < 1 || n > 9)
        return ;
    ft_print_combn_recursive(t, n, 0, '0');
}
```

## Explanation

The `ft_print_combn` function generates and prints all possible combinations of `n` digits in ascending order. Each combination is separated by a comma and space (", ") except for the last one. It uses recursion to systematically explore all combinations.

### Function Overview

The function `ft_print_combn` initializes an array `t[]` to store combinations and calls `ft_print_combn_recursive(t, n, 0, '0')` to start generating combinations.

### Recursive Function (`ft_print_combn_recursive`)

- **Parameters:**
  - `t[]`: Array to store the current combination of digits.
  - `n`: Total number of digits in each combination.
  - `index`: Current index in the combination being constructed.
  - `start`: Starting digit for the current index (`'0'` initially).

- **Base Case:**
  - When `index == n`, it prints the current combination using `write(1, t, n)`.
  - If it's not the last combination (`t[0] == '9' - n + 1 && t[n - 1] == '9'`), it prints `", "`.

- **Recursive Logic:**
  - It iterates through possible digits (`start` to `'9'`) for the current index.
  - Assigns each digit to `t[index]` and recursively calls itself with incremented `index` and `start`.

### Example Breakdown (`n = 9`)

- Starts with `012345678` and explores all combinations in ascending order.
- Iterates through all possible combinations until reaching `123456789`.

### Output Example

```plaintext
012345678, 012345679, 012345680, ..., 123456789
```
Each combination follows the sequential and ascending order of digits, with proper formatting between combinations. The recursive approach efficiently generates all possible combinations while managing state and control flow through the call stack.
