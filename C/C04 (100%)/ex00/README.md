# ft_strlen Function README

## Introduction
This README file explains how to understand and use the `ft_strlen` function. The `ft_strlen` function is designed to calculate the length of a given string. It mimics the behavior of the standard `strlen` function found in the C standard library.

## Problem Comprehension
To solve the problem of calculating the length of a string, follow these steps:

1. **Initialization**: Begin by initializing an integer to keep count of the characters in the string.
2. **Traversal**: Loop through the string character by character until the null terminator (`'\0'`) is reached.
3. **Counting**: For each character encountered before the null terminator, increment the count.
4. **Return Result**: Once the null terminator is reached, return the count as the length of the string.

## How to Use the Function
To use the `ft_strlen` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the string whose length you want to calculate.
3. **Handle the Result**: The function returns an integer representing the length of the string.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_strlen`:

```c
#include <stdio.h>

// Function prototype
int ft_strlen(char *str);

int main() {
    // Test cases
    char str1[] = "Hello, World!";
    char str2[] = "";
    char str3[] = "42";
    char str4[] = "This is a longer string with multiple words.";
    
    // Calculating lengths
    int length1 = ft_strlen(str1);
    printf("Length of '%s': %d\n", str1, length1);
    
    int length2 = ft_strlen(str2);
    printf("Length of an empty string: %d\n", length2);
    
    int length3 = ft_strlen(str3);
    printf("Length of '%s': %d\n", str3, length3);
    
    int length4 = ft_strlen(str4);
    printf("Length of '%s': %d\n", str4, length4);
    
    return 0;
}
```