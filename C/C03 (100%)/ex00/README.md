# ft_strcmp Function README

## Introduction
This README file explains how to understand and use the `ft_strcmp` function. The `ft_strcmp` function is designed to compare two strings and determine their lexicographical order. It mimics the behavior of the standard `strcmp` function found in the C standard library.

## Problem Comprehension
To solve the problem of comparing two strings, follow these steps:

1. **Initialization**: Begin by initializing an index to traverse both strings.
2. **Traversal and Comparison**: Loop through both strings simultaneously:
   - Check if either string has reached the null terminator (`'\0'`).
   - Compare the characters at the current index of both strings.
   - If the characters are different, return the difference between the ASCII values of these characters.
   - If the characters are the same, continue to the next character.
3. **Post-Traversal Check**: After the loop, if the end of either string is reached:
   - If one string is longer than the other, return the difference of the remaining characters.
   - If both strings end at the same position, return 0 indicating the strings are equal.

## How to Use the Function
To use the `ft_strcmp` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing two string arguments to it.
3. **Handle the Return Value**: The function returns:
   - A negative value if the first string is lexicographically less than the second string.
   - A positive value if the first string is lexicographically greater than the second string.
   - Zero if both strings are equal.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_strcmp`:

```c
#include <stdio.h>

// Function prototype
int ft_strcmp(char *s1, char *s2);

int main() {
    // Test cases
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    char str4[] = "HelloWorld";
    
    // Comparing equal strings
    int result1 = ft_strcmp(str1, str2);
    printf("Comparison result of '%s' and '%s': %d\n", str1, str2, result1);
    
    // Comparing different strings
    int result2 = ft_strcmp(str1, str3);
    printf("Comparison result of '%s' and '%s': %d\n", str1, str3, result2);
    
    // Comparing strings with different lengths
    int result3 = ft_strcmp(str1, str4);
    printf("Comparison result of '%s' and '%s': %d\n", str1, str4, result3);
    
    return 0;
}
```
By following this guide, you should be able to understand the purpose of the ft_strcmp function, how it works, and how to use it effectively in your programs.

