# ft_ultimate_div_mod

## Explanation

The `ft_ultimate_div_mod` function calculates the integer division and modulus of two integers pointed to by `*a` and `*b`, storing the division result in `*a` and the modulus result in `*b`. This function illustrates how to modify values indirectly through pointers in C, particularly useful when needing to update variables within a function.

### Function Overview

The function `ft_ultimate_div_mod` is prototyped as `void ft_ultimate_div_mod(int *a, int *b);`. It takes two integer pointers (`int *a` and `int *b`) as parameters.

### Implementation Details

- **Parameters:**
  - `a`: Pointer to an integer (`int *a`).
  - `b`: Pointer to an integer (`int *b`).

- **Functionality:**
  - Calculates the integer division of `*a` by `*b` and stores the result back in `*a` (`*a = *a / *b`).
  - Calculates the modulus of `*a` by `*b` and stores the result back in `*b` (`*b = *a % *b`).
  - Updates the values of `*a` and `*b` to reflect the division and modulus results.

### Example Usage

```c
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 20;
    int b = 7;

    printf("Before division: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After division: a = %d, b = %d\n", a, b);
    
    return 0;
}
```
### Output
```less
Before division: a = 20, b = 7
After division: a = 2, b = 6
```
This example demonstrates how ft_ultimate_div_mod updates the values of a and b to reflect the results of integer division and modulus.