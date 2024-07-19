# ft_putnbr Function README

## Introduction
This README file explains how to understand and use the `ft_putnbr` function. The `ft_putnbr` function is designed to print an integer to the standard output (usually the terminal). It mimics the behavior of the standard `putnbr` function found in various C libraries.

## Problem Comprehension
To solve the problem of printing an integer to the standard output, follow these steps:

1. **Handle Negative Numbers**: If the integer is negative, print a minus sign (`'-'`) and convert the number to its positive equivalent.
2. **Recursion for Digits**: Use recursion to handle the printing of each digit:
   - If the integer is greater than 9, recursively call `ft_putnbr` with the integer divided by 10.
   - After the recursive call, handle the current digit by taking the remainder of the integer divided by 10.
3. **Convert Digit to Character**: Convert the digit to its corresponding ASCII character.
4. **Print Character**: Use the `write` system call to print the character to the standard output.

## How to Use the Function
To use the `ft_putnbr` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the integer you want to print.
3. **Observe the Output**: The function does not return a value but prints the integer to the standard output.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_putnbr`:

```c
#include <unistd.h>

// Function prototype
void ft_putnbr(int nb);

int main() {
    // Test cases
    int num1 = 42;
    int num2 = -12345;
    int num3 = 0;
    int num4 = 2147483647;   // Maximum value of a 32-bit integer
    int num5 = -2147483648;  // Minimum value of a 32-bit integer
    
    // Printing numbers
    ft_putnbr(num1);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr(num2);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr(num3);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr(num4);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr(num5);
    write(1, "\n", 1);  // Newline for better readability
    
    return 0;
}
```