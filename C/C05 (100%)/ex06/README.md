# ft_is_prime Function README

## Introduction
This README file explains how to understand and use the `ft_is_prime` function. The `ft_is_prime` function is designed to determine if a given integer `nb` is a prime number.

## Problem Comprehension
To solve the problem of determining if `nb` is a prime number, follow these steps:

1. **Input Validation**: Check if `nb` is less than 2 (`nb < 2`). Prime numbers are defined as integers greater than 1. If `nb` is less than 2, return 0 (false) because numbers less than 2 cannot be prime.
2. **Iterative Check**: Initialize an integer `i` to 2. Use a loop to iterate from 2 to `nb - 1`.
   - Inside the loop, check if `nb` is divisible by `i` (i.e., `nb % i == 0`). If true, `nb` is not a prime number, so return 0 (false).
   - Increment `i` by 1 in each iteration.
3. **Return Result**: If the loop completes without finding any divisors of `nb`, return 1 (true), indicating that `nb` is a prime number.

## How to Use the Function
To use the `ft_is_prime` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing an integer `nb` that you want to check for primality.
3. **Handle the Result**: The function returns an integer: 1 if `nb` is prime, and 0 if `nb` is not prime.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_is_prime`:

```c
#include <stdio.h>

// Function prototype
int ft_is_prime(int nb);

int main() {
    // Test cases
    int number1 = 7;  // Prime number
    int number2 = 12; // Not a prime number
    int number3 = 23; // Prime number

    // Checking primality
    int result1 = ft_is_prime(number1);
    printf("%d is prime: %s\n", number1, result1 ? "Yes" : "No");
    
    int result2 = ft_is_prime(number2);
    printf("%d is prime: %s\n", number2, result2 ? "Yes" : "No");
    
    int result3 = ft_is_prime(number3);
    printf("%d is prime: %s\n", number3, result3 ? "Yes" : "No");
    
    return 0;
}
```