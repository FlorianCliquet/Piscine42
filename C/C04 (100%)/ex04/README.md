# ft_putnbr_base Function README

## Introduction
This README file explains how to understand and use the `ft_putnbr_base` function. The `ft_putnbr_base` function is designed to convert an integer into a string representation based on a given base. It then prints this string to the standard output. This function is a custom implementation of converting and printing numbers in different bases.

## Problem Comprehension
To solve the problem of converting an integer to a string in a specific base and printing it, follow these steps:

1. **Validate the Base**: Ensure the provided base is valid by checking:
   - The base must contain at least two unique characters.
   - The characters '+' and '-' are not allowed in the base.
   - All characters in the base must be unique.
2. **Handle Negative Numbers**: If the integer is negative, print a minus sign (`'-'`) and convert the number to its positive equivalent.
3. **Recursive Conversion**: Use recursion to convert the integer into its base representation:
   - If the integer is greater than or equal to the base length, recursively call `ft_recu` to divide the integer by the base length and then recursively convert the remainder.
   - Base cases are handled by directly printing the character corresponding to the current digit.
4. **Printing**: Use the `write` system call to print each character of the base representation to the standard output.

## How to Use the Function
To use the `ft_putnbr_base` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the integer and the base you want to convert to and print.
3. **Observe the Output**: The function does not return a value but prints the base representation of the integer to the standard output.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_putnbr_base`:

```c
#include <unistd.h>

// Function prototypes
unsigned int ft_strlen(char *str);
int is_base_valid(char *base);
void ft_putchar(char c);
void ft_recu(unsigned int nbr, char *base, unsigned int base_len);
void ft_putnbr_base(int nbr, char *base);

int main() {
    // Test cases
    int num1 = 42;
    int num2 = -12345;
    int num3 = 0;
    int num4 = 2147483647;   // Maximum value of a 32-bit integer
    int num5 = -2147483648;  // Minimum value of a 32-bit integer
    char base1[] = "0123456789";
    char base2[] = "01";
    char base3[] = "0123456789ABCDEF";
    
    // Printing numbers in different bases
    ft_putnbr_base(num1, base1);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr_base(num2, base1);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr_base(num3, base2);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr_base(num4, base1);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr_base(num5, base1);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putnbr_base(num1, base3);
    write(1, "\n", 1);  // Newline for better readability
    
    return 0;
}
```