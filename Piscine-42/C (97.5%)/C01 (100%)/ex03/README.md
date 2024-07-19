# ft_div_mod

## Explanation

The `ft_div_mod` function calculates the integer division and modulus of two integers `a` and `b`, storing the results in `*div` and `*mod` respectively. This function is useful for performing arithmetic operations and storing results through pointers in C.

### Function Overview

The function `ft_div_mod` is prototyped as `void ft_div_mod(int a, int b, int *div, int *mod);`. It takes two integers (`a` and `b`) and two integer pointers (`*div` and `*mod`) as parameters.

### Implementation Details

- **Parameters:**
  - `a`: First integer operand.
  - `b`: Second integer operand (must not be zero to avoid division by zero).
  - `div`: Pointer to store the result of `a / b`.
  - `mod`: Pointer to store the result of `a % b`.

- **Functionality:**
  - Calculates the integer division of `a` by `b` and stores the result in `*div` (`*div = a / b`).
  - Calculates the modulus of `a` by `b` and stores the result in `*mod` (`*mod = a % b`).
  - Handles edge cases where `b` is zero (division by zero is undefined in C).

### Example Usage

```c
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 20;
    int b = 7;
    int division_result;
    int modulus_result;

    ft_div_mod(a, b, &division_result, &modulus_result);

    printf("Division of %d by %d is %d\n", a, b, division_result);
    printf("Modulus of %d by %d is %d\n", a, b, modulus_result);
    
    return 0;
}
```
### Output
```csharp
Division of 20 by 7 is 2
Modulus of 20 by 7 is 6
```
This example demonstrates how ft_div_mod calculates the division and modulus of a by b and stores the results through pointers.