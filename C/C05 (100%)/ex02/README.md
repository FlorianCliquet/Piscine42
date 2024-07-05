# ft_iterative_power Function README

## Introduction
This README file explains how to understand and use the `ft_iterative_power` function. The `ft_iterative_power` function is designed to compute the power of a given integer `nb` raised to the power of `power` using an iterative approach.

## Problem Comprehension
To solve the problem of computing the power of an integer iteratively, follow these steps:

1. **Input Validation**: Check if the `power` is non-negative (`power >= 0`). If `power` is negative, return 0 (though typically, powers are not defined for negative exponents).
2. **Iterative Calculation**: Initialize a variable `n` to 1 and iterate from `power` down to 1:
   - Multiply `n` by `nb` in each iteration.
   - Decrement `power` in each iteration until it reaches 0.
3. **Return Result**: After completing the loop, `n` will contain the result of `nb` raised to the power of `power`. Return `n` as the result.

## How to Use the Function
To use the `ft_iterative_power` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing two integers: `nb` (the base) and `power` (the exponent).
3. **Handle the Result**: The function returns an integer, which is `nb` raised to the power of `power`.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_iterative_power`:

```c
#include <stdio.h>

// Function prototype
int ft_iterative_power(int nb, int power);

int main() {
    // Test cases
    int base1 = 2, exp1 = 0; // 2^0 = 1
    int base2 = 3, exp2 = 1; // 3^1 = 3
    int base3 = 2, exp3 = 8; // 2^8 = 256
    int base4 = 5, exp4 = -3; // Invalid case (negative exponent)

    // Computing powers
    int result1 = ft_iterative_power(base1, exp1);
    printf("%d^%d = %d\n", base1, exp1, result1);
    
    int result2 = ft_iterative_power(base2, exp2);
    printf("%d^%d = %d\n", base2, exp2, result2);
    
    int result3 = ft_iterative_power(base3, exp3);
    printf("%d^%d = %d\n", base3, exp3, result3);
    
    int result4 = ft_iterative_power(base4, exp4);
    printf("%d^%d = %d\n", base4, exp4, result4); // This should return 0 due to invalid input
    
    return 0;
}
```