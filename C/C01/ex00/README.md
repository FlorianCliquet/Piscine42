# ft_ft

## Explanation

The `ft_ft` function sets the value of an integer pointer (`*nbdr`) to `42`. This function is straightforward and serves as an introductory exercise in understanding pointers and how they can be manipulated to modify values indirectly.

### Function Overview

The function `ft_ft` is prototyped as `void ft_ft(int *nbdr);`. It takes a pointer to an integer (`nbdr`) as a parameter and updates the value it points to with `42`.

### Implementation Details

- **Parameters:**
  - `nbdr`: Pointer to an integer (`int *`).

- **Functionality:**
  - Dereferences the pointer `nbdr` using `*nbdr` to access the integer it points to.
  - Sets the value of the integer to `42`.

### Example Usage

```c
#include <stdio.h>

void ft_ft(int *nbdr);

int main(void)
{
    int number = 0;
    printf("Before ft_ft: %d\n", number);
    ft_ft(&number);
    printf("After ft_ft: %d\n", number);
    return 0;
}
```

### Output 
```plaintext
Before ft_ft: 0
After ft_ft: 42
```
This example demonstrates how ft_ft modifies the value of number indirectly through its pointer.

