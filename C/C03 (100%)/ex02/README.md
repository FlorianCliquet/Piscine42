# ft_strncmp Function README

## Introduction
This README file explains how to understand and use the `ft_strncmp` function. The `ft_strncmp` function is designed to compare two strings up to a specified number of characters and determine their lexicographical order. It mimics the behavior of the standard `strncmp` function found in the C standard library.

## Problem Comprehension
To solve the problem of comparing two strings up to `n` characters, follow these steps:

1. **Initialization**: Begin by initializing an index to traverse both strings and an unsigned integer `n` to specify the maximum number of characters to compare.
2. **Traversal and Comparison**: Loop through both strings simultaneously, up to `n` characters:
   - Check if either string has reached the null terminator (`'\0'`) or if the index has reached `n`.
   - Compare the characters at the current index of both strings.
   - If the characters are different, return the difference between the ASCII values of these characters.
   - If the characters are the same, continue to the next character.
3. **Post-Traversal Check**: After the loop, if the end of either string is reached before `n` characters:
   - If one string is longer than the other within the first `n` characters, return the difference of the remaining characters.
   - If both strings end at the same position within `n` characters, return 0 indicating the strings are equal up to `n` characters.

## How to Use the Function
To use the `ft_strncmp` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing two string arguments and the maximum number of characters to compare (an unsigned integer `n`) to it.
3. **Handle the Return Value**: The function returns:
   - A negative value if the first string is lexicographically less than the second string within the first `n` characters.
   - A positive value if the first string is lexicographically greater than the second string within the first `n` characters.
   - Zero if both strings are equal up to `n` characters.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_strncmp`:

```c
#include <stdio.h>

// Function prototype
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {
    // Test cases
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    char str4[] = "HelloWorld";
    
    // Comparing equal strings up to n characters
    int result1 = ft_strncmp(str1, str2, 5);
    printf("Comparison result of '%s' and '%s' up to 5 characters: %d\n", str1, str2, result1);
    
    // Comparing different strings up to n characters
    int result2 = ft_strncmp(str1, str3, 5);
    printf("Comparison result of '%s' and '%s' up to 5 characters: %d\n", str1, str3, result2);
    
    // Comparing strings with different lengths up to n characters
    int result3 = ft_strncmp(str1, str4, 7);
    printf("Comparison result of '%s' and '%s' up to 7 characters: %d\n", str1, str4, result3);
    
    return 0;
}
```
By following this guide, you should be able to understand the purpose of the ft_strncmp function, how it works, and how to use it effectively in your programs.
