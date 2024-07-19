# ft_sqrt Function README

## Introduction
This README file explains how to understand and use the `ft_sqrt` function. The `ft_sqrt` function is designed to compute the integer square root of a given non-negative integer `nb`.

## Problem Comprehension
To solve the problem of finding the integer square root, follow these steps:

1. **Input Validation**: Check if `nb` is less than 1 (`nb < 1`). If `nb` is less than 1, return 0 because square roots are not defined for negative numbers.
2. **Iterative Calculation**: Initialize an unsigned integer `i` to 1. Use a loop to increment `i` until `i * i` is greater than or equal to `nb`.
3. **Check Square Root**: After exiting the loop, check if `i * i` equals `nb`. If it does, `i` is the integer square root of `nb`.
4. **Return Result**: Return `i` if `i * i` equals `nb`, otherwise return 0 indicating that `nb` does not have an integer square root.

## How to Use the Function
To use the `ft_sqrt` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing an integer `nb` for which you want to compute the integer square root.
3. **Handle the Result**: The function returns an integer, which is the integer square root of `nb`.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_sqrt`:

```c
#include <stdio.h>

// Function prototype
int ft_sqrt(int nb);

int main() {
    // Test cases
    int number1 = 16; // Square root of 16 is 4
    int number2 = 25; // Square root of 25 is 5
    int number3 = 10; // No integer square root for 10

    // Computing square roots
    int result1 = ft_sqrt(number1);
    printf("Square root of %d = %d\n", number1, result1);
    
    int result2 = ft_sqrt(number2);
    printf("Square root of %d = %d\n", number2, result2);
    
    int result3 = ft_sqrt(number3);
    printf("Square root of %d = %d\n", number3, result3); // This should return 0 since 10 has no integer square root
    
    return 0;
}
```