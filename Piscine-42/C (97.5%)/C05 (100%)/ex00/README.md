# ft_iterative_factorial Function README

## Introduction
This README file explains how to understand and use the `ft_iterative_factorial` function. The `ft_iterative_factorial` function is designed to compute the factorial of a given non-negative integer using an iterative approach. Factorial of a number `n` is denoted as `n!` and is defined as the product of all positive integers less than or equal to `n`.

## Problem Comprehension
To solve the problem of computing the factorial of a number iteratively, follow these steps:

1. **Input Validation**: Check if the input number `nb` is non-negative (>= 0) and within the range that can be accurately computed (`nb <= 12` due to integer overflow beyond this point).
2. **Iterative Calculation**: Initialize a variable `n` to 1 and iterate from `nb` down to 1:
   - Multiply `n` by the current value of `nb`.
   - Decrement `nb` in each iteration until it reaches 1.
3. **Return Result**: After completing the loop, `n` will contain the factorial of the original number `nb`. Return `n` as the result.

## How to Use the Function
To use the `ft_iterative_factorial` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the integer for which you want to compute the factorial.
3. **Handle the Result**: The function returns an integer, which is the factorial of the input number.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_iterative_factorial`:

```c
#include <stdio.h>

// Function prototype
int ft_iterative_factorial(int nb);

int main() {
    // Test cases
    int num1 = 0;
    int num2 = 1;
    int num3 = 5;
    int num4 = 10;
    int num5 = 15; // This should return 0 as it exceeds the maximum accurate calculation (12!)

    // Computing factorials
    int fact1 = ft_iterative_factorial(num1);
    printf("Factorial of %d is: %d\n", num1, fact1);
    
    int fact2 = ft_iterative_factorial(num2);
    printf("Factorial of %d is: %d\n", num2, fact2);
    
    int fact3 = ft_iterative_factorial(num3);
    printf("Factorial of %d is: %d\n", num3, fact3);
    
    int fact4 = ft_iterative_factorial(num4);
    printf("Factorial of %d is: %d\n", num4, fact4);
    
    int fact5 = ft_iterative_factorial(num5);
    printf("Factorial of %d is: %d\n", num5, fact5);
    
    return 0;
}
```