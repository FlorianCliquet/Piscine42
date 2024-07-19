# ft_range

## Introduction
The `ft_range` function is designed to create an array of integers ranging from `min` to `max-1`. It dynamically allocates memory for the array and returns a pointer to the array.

## Problem Understanding
The main objective of this function is to generate an array of integers where each element increments sequentially from `min` up to (but not including) `max`. It handles cases where `min` is greater than or equal to `max`, returning `NULL` or handling edge cases appropriately.

## Steps to Understand the Problem

1. **Function Signature**:
   - `int *ft_range(int min, int max)`: The main function that generates the array of integers.

2. **Memory Allocation**: 
   - Inside `ft_range`, memory is allocated using `malloc` to create an array (`ptr`) of integers of size `(max - min)`.

3. **Error Handling**: 
   - The function checks if `malloc` successfully allocated memory. If `malloc` returns `NULL`, indicating failure to allocate memory, the function returns `NULL`.

4. **Array Generation**:
   - Using a `while` loop, `ft_range` iterates from `min` to `(max - 1)` and assigns each value to the corresponding index in the `ptr` array.

5. **Returning a Value**: 
   - Finally, `ft_range` returns the pointer `ptr`, which now points to the dynamically allocated array containing the range of integers from `min` to `max-1`.

6. **Edge Case Handling**: 
   - If `min` is greater than or equal to `max`, the function returns `NULL` or handles the case appropriately to avoid undefined behavior or incorrect memory allocation.

## How to Use the Function
To test the `ft_range` function, compile the program containing this function. Call `ft_range` with different values of `min` and `max` and ensure it correctly generates and returns the desired array of integers.

## Example Usage
Assume the compiled program is named `range_example`. When using `ft_range` to generate an array of integers:
```c
#include <stdio.h>

int main(void)
{
    int min = 5;
    int max = 10;
    int *range = ft_range(min, max);
    if (range)
    {
        printf("Range from %d to %d:\n", min, max);
        for (int i = 0; i < (max - min); i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range); // Free allocated memory when done using it
    }
    return 0;
}
```
This example demonstrates how ft_range can be used to generate an array of integers ranging from 5 to 9 (for min = 5 and max = 10) and print each element of the generated array.

## Conclusion

Understanding the ft_range function involves understanding its purpose, memory allocation using malloc, array generation using a while loop, edge case handling, and how to verify its functionality through execution.