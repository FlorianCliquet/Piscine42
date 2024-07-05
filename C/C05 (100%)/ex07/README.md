# ft_find_next_prime Function README

## Introduction
This README file explains how to understand and use the `ft_find_next_prime` function. The `ft_find_next_prime` function is designed to find the smallest prime number greater than or equal to a given integer `nb`.

## Problem Comprehension
To solve the problem of finding the next prime number after `nb`, follow these steps:

1. **Initial Checks**: Handle edge cases:
   - If `nb` is less than 3, return 2. This is because the smallest prime number is 2, and if `nb` is 2 or less, the next prime is 2.
   - If `nb` is even (`nb % 2 == 0`), increment `nb` by 1 to make it odd. This ensures that the subsequent checks only deal with odd numbers.

2. **Iterative Check**: Initialize an unsigned integer `i` to 3. Use a loop to iterate:
   - Check if `nb` is divisible by `i` (i.e., `nb % i == 0`). If true, increment `nb` by 2 (to check the next odd number) and reset `i` to 1.
   - Increment `i` by 2 in each iteration to check only odd numbers.

3. **Return Result**: If the loop exits without finding any divisors for `nb`, `nb` itself is a prime number and should be returned.

## How to Use the Function
To use the `ft_find_next_prime` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing an integer `nb` for which you want to find the next prime number.
3. **Handle the Result**: The function returns an integer, which is the smallest prime number greater than or equal to `nb`.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_find_next_prime`:

```c
#include <stdio.h>

// Function prototype
int ft_find_next_prime(int nb);

int main() {
    // Test cases
    int number1 = 10; // Next prime number after 10 is 11
    int number2 = 20; // Next prime number after 20 is 23
    int number3 = 7;  // 7 itself is a prime number

    // Finding next prime numbers
    int result1 = ft_find_next_prime(number1);
    printf("Next prime after %d is %d\n", number1, result1);
    
    int result2 = ft_find_next_prime(number2);
    printf("Next prime after %d is %d\n", number2, result2);
    
    int result3 = ft_find_next_prime(number3);
    printf("Next prime after %d is %d\n", number3, result3);
    
    return 0;
}
```