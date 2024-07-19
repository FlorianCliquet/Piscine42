# ft_atoi Function README

## Introduction
This README file explains how to understand and use the `ft_atoi` function. The `ft_atoi` function is designed to convert a string representation of an integer into an integer value. It mimics the behavior of the standard `atoi` function found in the C standard library.

## Problem Comprehension
To solve the problem of converting a string to an integer, follow these steps:

1. **Skip Leading Whitespace**: Ignore any leading whitespace characters (`' '`, `'\t'`, `'\n'`, `'\v'`, `'\f'`, `'\r'`).
2. **Handle Sign**: Determine if the number is positive or negative based on an optional leading '+' or '-' character.
3. **Process Digits**: Convert each numeric character ('0' to '9') encountered in the string into its corresponding integer value:
   - Multiply the current result by 10 and add the numeric value of the character ('0' subtracted from the character).
   - Continue this process until a non-numeric character is encountered.
4. **Apply Sign**: Apply the determined sign (positive or negative) to the accumulated result.
5. **Return Result**: Return the final integer value.

## How to Use the Function
To use the `ft_atoi` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the string representation of the integer you want to convert.
3. **Handle the Result**: The function returns an integer corresponding to the converted value.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_atoi`:

```c
#include <stdio.h>

// Function prototype
int ft_atoi(char *str);

int main() {
    // Test cases
    char str1[] = "42";
    char str2[] = "-12345";
    char str3[] = "   789";
    char str4[] = "+2147483647";
    char str5[] = "   -2147483648";
    char str6[] = "  + 123abc";
    
    // Converting strings to integers
    int num1 = ft_atoi(str1);
    printf("Converted '%s' to integer: %d\n", str1, num1);
    
    int num2 = ft_atoi(str2);
    printf("Converted '%s' to integer: %d\n", str2, num2);
    
    int num3 = ft_atoi(str3);
    printf("Converted '%s' to integer: %d\n", str3, num3);
    
    int num4 = ft_atoi(str4);
    printf("Converted '%s' to integer: %d\n", str4, num4);
    
    int num5 = ft_atoi(str5);
    printf("Converted '%s' to integer: %d\n", str5, num5);
    
    int num6 = ft_atoi(str6);
    printf("Converted '%s' to integer: %d\n", str6, num6);
    
    return 0;
}
```