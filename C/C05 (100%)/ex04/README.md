# ft_fibonacci Function README

## Introduction
This README file explains how to understand and use the `ft_fibonacci` function. The `ft_fibonacci` function is designed to compute the Fibonacci sequence value at a given index using a recursive approach.

## Problem Comprehension
To solve the problem of computing the Fibonacci sequence recursively, follow these steps:

1. **Input Validation**: Check if the `index` is non-negative (`index >= 0`). If `index` is negative, return -1 (though typically, Fibonacci sequence is not defined for negative indices).
2. **Base Cases**:
   - If `index` is 0, return 0.
   - If `index` is 1, return 1.
3. **Recursive Calculation**: If `index` is greater than 1, recursively call `ft_fibonacci` with `index - 1` and `index - 2`, then sum the results.
4. **Return Result**: The function returns the computed Fibonacci sequence value at `index`.

## How to Use the Function
To use the `ft_fibonacci` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing an integer `index` for which you want to compute the Fibonacci value.
3. **Handle the Result**: The function returns an integer, which is the Fibonacci value at the given `index`.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_fibonacci`:

```c
#include <stdio.h>

// Function prototype
int ft_fibonacci(int index);

int main() {
    // Test cases
    int index1 = 0; // Fibonacci(0) = 0
    int index2 = 1; // Fibonacci(1) = 1
    int index3 = 5; // Fibonacci(5) = 5
    int index4 = -3; // Invalid case (negative index)

    // Computing Fibonacci numbers
    int result1 = ft_fibonacci(index1);
    printf("Fibonacci(%d) = %d\n", index1, result1);
    
    int result2 = ft_fibonacci(index2);
    printf("Fibonacci(%d) = %d\n", index2, result2);
    
    int result3 = ft_fibonacci(index3);
    printf("Fibonacci(%d) = %d\n", index3, result3);
    
    int result4 = ft_fibonacci(index4);
    printf("Fibonacci(%d) = %d\n", index4, result4); // This should return -1 due to invalid input
    
    return 0;
}
```