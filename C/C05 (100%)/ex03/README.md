# ft_recursive_power Function README

## Introduction
This README file explains how to understand and use the `ft_recursive_power` function. The `ft_recursive_power` function is designed to compute the power of a given integer `nb` raised to the power of `power` using a recursive approach.

## Problem Comprehension
To solve the problem of computing the power of an integer recursively, follow these steps:

1. **Input Validation**: Check if the `power` is non-negative (`power >= 0`). If `power` is negative, return 0 (though typically, powers are not defined for negative exponents).
2. **Base Cases**:
   - If `power` is 0, return 1. This is because any number raised to the power of 0 is 1.
3. **Recursive Calculation**: If `power` is greater than 0, recursively call `ft_recursive_power` with `power - 1` and multiply the result by `nb`.
4. **Return Result**: The function returns the computed result of `nb` raised to the power of `power`.

## How to Use the Function
To use the `ft_recursive_power` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing two integers: `nb` (the base) and `power` (the exponent).
3. **Handle the Result**: The function returns an integer, which is `nb` raised to the power of `power`.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_recursive_power`:

```c
#include <stdio.h>

// Function prototype
int ft_recursive_power(int nb, int power);

int main() {
    // Test cases
    int base1 = 2, exp1 = 0; // 2^0 = 1
    int base2 = 3, exp2 = 1; // 3^1 = 3
    int base3 = 2, exp3 = 8; // 2^8 = 256
    int base4 = 5, exp4 = -3; // Invalid case (negative exponent)

    // Computing powers
    int result1 = ft_recursive_power(base1, exp1);
    printf("%d^%d = %d\n", base1, exp1, result1);
    
    int result2 = ft_recursive_power(base2, exp2);
    printf("%d^%d = %d\n", base2, exp2, result2);
    
    int result3 = ft_recursive_power(base3, exp3);
    printf("%d^%d = %d\n", base3, exp3, result3);
    
    int result4 = ft_recursive_power(base4, exp4);
    printf("%d^%d = %d\n", base4, exp4, result4); // This should return 0 due to invalid input
    
    return 0;
}
```