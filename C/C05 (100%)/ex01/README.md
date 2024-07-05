# ft_recursive_factorial Function README

## Introduction
This README file explains how to understand and use the `ft_recursive_factorial` function. The `ft_recursive_factorial` function is designed to compute the factorial of a given non-negative integer using a recursive approach. Factorial of a number `n` is denoted as `n!` and is defined as the product of all positive integers less than or equal to `n`.

## Problem Comprehension
To solve the problem of computing the factorial of a number recursively, follow these steps:

1. **Input Validation**: Check if the input number `nb` is non-negative (>= 0). If `nb` is negative, return 0 (though typically, factorials are not defined for negative numbers).
2. **Base Cases**:
   - If `nb` is less than 2, return 1. This handles the base cases where `nb` is 0 or 1, as `0!` and `1!` are both defined as 1.
3. **Recursive Calculation**: If `nb` is greater than or equal to 2, recursively call `ft_recursive_factorial` with `nb - 1` and multiply the result by `nb`.
4. **Return Result**: The function returns the computed factorial value.

## How to Use the Function
To use the `ft_recursive_factorial` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the integer for which you want to compute the factorial.
3. **Handle the Result**: The function returns an integer, which is the factorial of the input number.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_recursive_factorial`:

```c
#include <stdio.h>

// Function prototype
int ft_recursive_factorial(int nb);

int main() {
    // Test cases
    int num1 = 0;
    int num2 = 1;
    int num3 = 5;
    int num4 = 10;
    int num5 = 15; // This should not be calculated as it exceeds typical recursive limits for factorial

    // Computing factorials
    int fact1 = ft_recursive_factorial(num1);
    printf("Factorial of %d is: %d\n", num1, fact1);
    
    int fact2 = ft_recursive_factorial(num2);
    printf("Factorial of %d is: %d\n", num2, fact2);
    
    int fact3 = ft_recursive_factorial(num3);
    printf("Factorial of %d is: %d\n", num3, fact3);
    
    int fact4 = ft_recursive_factorial(num4);
    printf("Factorial of %d is: %d\n", num4, fact4);
    
    int fact5 = ft_recursive_factorial(num5);
    printf("Factorial of %d is: %d\n", num5, fact5); // This will not be computed due to recursion limits
    
    return 0;
}
```