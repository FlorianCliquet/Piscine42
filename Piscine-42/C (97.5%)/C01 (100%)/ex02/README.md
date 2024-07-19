# ft_swap

## Explanation

The `ft_swap` function swaps the values of two integers using their pointers. This function is designed to illustrate how to manipulate values indirectly through pointers in C, facilitating operations like swapping variables.

### Function Overview

The function `ft_swap` is prototyped as `void ft_swap(int *a, int *b);`. It takes two integer pointers (`int *a` and `int *b`) as parameters and swaps the values they point to.

### Implementation Details

- **Parameters:**
  - `a`: Pointer to an integer (`int *a`).
  - `b`: Pointer to an integer (`int *b`).

- **Functionality:**
  - Uses a temporary variable `tmp` to store the value pointed to by `a`.
  - Assigns the value of `b` to `a` (`*a = *b`).
  - Assigns the temporary value (`tmp`) to `b` (`*b = tmp`).
  - Effectively swaps the values of the integers pointed to by `a` and `b`.

### Example Usage

```c
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;
}
```
### Output
```mathematica
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
```
This example demonstrates how ft_swap swaps the values of x and y using their pointers.