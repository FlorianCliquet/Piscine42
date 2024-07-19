# ft_rev_int_tab

## Explanation

The `ft_rev_int_tab` function reverses the elements of an integer array (`int *tab`) in place. This function iterates through the array, swapping elements from the start and end until it reaches the middle. Reversing an array is a common operation that can be useful in various contexts, such as algorithms and data processing.

### Function Overview

The function `ft_rev_int_tab` is prototyped as `void ft_rev_int_tab(int *tab, int size);`. It takes two parameters:
- A pointer to an integer array (`int *tab`).
- The size of the array (`int size`).

### Implementation Details

- **Parameters:**
  - `tab`: Pointer to an integer array (`int *`).
  - `size`: Size of the array (`int`).

- **Functionality:**
  - Initializes an integer variable `i` to serve as an index for iterating through the array.
  - Uses a while loop to iterate through the array until it reaches the midpoint (`i < size / 2`).
  - Within the loop, swaps the elements at the start and end of the array using a temporary variable `tmp`.
  - Increments the index variable `i` to continue the swapping process towards the middle of the array.

### Example Usage

```c
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_rev_int_tab(array, size);

    printf("Reversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
```
### Output
```csharp
Original array: 1 2 3 4 5 
Reversed array: 5 4 3 2 1
```
This example demonstrates how ft_rev_int_tab reverses the elements of the integer array {1, 2, 3, 4, 5} to {5, 4, 3, 2, 1}.