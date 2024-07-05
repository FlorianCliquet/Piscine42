# ft_ultimate_range

## Introduction
The `ft_ultimate_range` function is designed to create an array of integers ranging from `min` to `max-1`. It dynamically allocates memory for the array, assigns it to a pointer (`*range`), and returns the size of the array.

## Problem Understanding
The main objective of this function is to generate an array of integers where each element increments sequentially from `min` up to (but not including) `max`. It also handles cases where `min` is greater than or equal to `max`, returning `NULL` or handling edge cases appropriately.

## Steps to Understand the Problem

1. **Function Signature**:
   - `int ft_ultimate_range(int **range, int min, int max)`: The main function that generates the array of integers and assigns it to `*range`.

2. **Memory Allocation**: 
   - Inside `ft_ultimate_range`, memory is allocated using `malloc` to create an array (`ptr`) of integers of size `(max - min)`.

3. **Error Handling**: 
   - The function checks if `malloc` successfully allocated memory. If `malloc` returns `NULL`, indicating failure to allocate memory, the function assigns `*range` to `NULL` and returns `-1`.

4. **Array Generation**:
   - Using a `while` loop, `ft_ultimate_range` iterates from `min` to `(max - 1)` and assigns each value to the corresponding index in the `ptr` array.

5. **Returning a Value**: 
   - Finally, `ft_ultimate_range` assigns `*range` to `ptr`, which now points to the dynamically allocated array containing the range of integers from `min` to `max-1`, and returns `(max - min)` as the size of the array.

6. **Edge Case Handling**: 
   - If `min` is greater than or equal to `max`, the function assigns `*range` to `NULL` and returns `0` to indicate an empty range.

## How to Use the Function
To test the `ft_ultimate_range` function, compile the program containing this function. Call `ft_ultimate_range` with different values of `min` and `max` and ensure it correctly generates and assigns the array to `*range`, returning the size of the array.

## Example Usage
Assume the compiled program is named `ultimate_range_example`. When using `ft_ultimate_range` to generate an array of integers:
```c
#include <stdio.h>

int main(void)
{
    int *range;
    int min = 5;
    int max = 10;
    int size = ft_ultimate_range(&range, min, max);
    if (size > 0)
    {
        printf("Range from %d to %d (size %d):\n", min, max - 1, size);
        for (int i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range); // Free allocated memory when done using it
    }
    else
    {
        printf("Invalid range.\n");
    }
    return 0;
}
```
This example demonstrates how ft_ultimate_range can be used to generate an array of integers ranging from 5 to 9 (for min = 5 and max = 10), assign it to *range, and print each element of the generated array.

## Conclusion

Understanding the ft_ultimate_range function involves understanding its purpose, memory allocation using malloc, array generation using a while loop, error handling for invalid ranges, and how to verify its functionality through execution.
