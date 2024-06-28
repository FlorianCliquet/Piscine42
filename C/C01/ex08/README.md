# ft_sort_int_tab

## Explanation

The `ft_sort_int_tab` function sorts an integer array (`int *tab`) in ascending order using the bubble sort algorithm. This algorithm repeatedly steps through the array, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until no more swaps are needed.

### Function Overview

The function `ft_sort_int_tab` is prototyped as `void ft_sort_int_tab(int *tab, int size);`. It takes two parameters:
- A pointer to an integer array (`int *tab`).
- The size of the array (`int size`).

### Implementation Details

- **Parameters:**
  - `tab`: Pointer to an integer array (`int *`).
  - `size`: Size of the array (`int`).

- **Functionality:**
  - Initializes an integer variable `i` to serve as an index for iterating through the array.
  - Initializes an integer variable `swapped` to keep track of whether any swaps were made during an iteration.
  - Uses a while loop that continues as long as `swapped` is true (indicating that a swap was made in the previous iteration).
  - Within the outer while loop, sets `swapped` to 0 at the beginning of each iteration.
  - Uses an inner while loop to iterate through the array elements up to `size - 1`.
  - Compares adjacent elements and swaps them if the current element is greater than the next element. Sets `swapped` to 1 if a swap is made.
  - Decrements `size` to optimize the sorting by ignoring the already sorted portion of the array in subsequent iterations.

### Example Usage

```c
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int array[] = {5, 3, 2, 4, 1};
    int size = 5;
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_sort_int_tab(array, size);

    printf("Sorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
```

## Revisiting Bubble Sort

The ft_sort_int_tab function implements a variation of the bubble sort algorithm. Here’s how it works and why it is a revisited version:

### Standard Bubble Sort
In a standard bubble sort:
- The array is traversed repeatedly.
- During each traversal, adjacent elements are compared and swapped if they are in the wrong order.
- The largest unsorted element "bubbles" up to its correct position at the end of the array with each full pass through the array.
- This process continues until no swaps are needed during a pass, indicating the array is sorted.

### Revisited Bubble Sort in ft_sort_int_tab
The function ft_sort_int_tab revisits the standard bubble sort algorithm with the following optimizations:

1. Swapped Flag:
    - A swapped flag is used to track whether any elements were swapped during a pass. If no swaps are made, the sorting process can terminate early, avoiding unnecessary passes through the already sorted array.

2. Reducing Array Size:
    - After each full pass, the size of the array to be sorted is reduced (size--). This optimization avoids comparing and swapping the already sorted portion of the array in subsequent passes.