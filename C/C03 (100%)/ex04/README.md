# ft_strstr Function README

## Introduction
This README file explains how to understand and use the `ft_strstr` function. The `ft_strstr` function is designed to locate a substring (to_find) within a string (str). It mimics the behavior of the standard `strstr` function found in the C standard library.

## Problem Comprehension
To solve the problem of finding a substring within a string, follow these steps:

1. **Check for Empty Substring**: If the substring (`to_find`) is empty, return the original string (`str`).
2. **Initialization**: Begin by initializing indices to traverse both the main string and the substring.
3. **Traversal and Matching**: Loop through the main string (`str`):
   - For each character in the main string, check if the substring matches starting from that position.
   - Use a nested loop to compare the characters of the substring with the corresponding characters in the main string.
   - If a mismatch is found, break the inner loop and continue with the next character in the main string.
   - If the end of the substring is reached without a mismatch, return the starting position of the substring within the main string.
4. **Return Result**: If the substring is not found, return `0`.

## How to Use the Function
To use the `ft_strstr` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the main string and the substring to it.
3. **Handle the Result**: The function returns:
   - A pointer to the first occurrence of the substring within the main string.
   - `0` if the substring is not found.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_strstr`:

```c
#include <stdio.h>

// Function prototypes
char *ft_strstr(char *str, char *to_find);
int ft_strlen(char *str);

int main() {
    // Test cases
    char str1[] = "Hello, World!";
    char to_find1[] = "World";
    char str2[] = "Hello, World!";
    char to_find2[] = "world";
    char str3[] = "Hello, World!";
    char to_find3[] = "";
    char str4[] = "Hello, World!";
    char to_find4[] = "Hello, World!";
    
    // Finding a substring
    char *result1 = ft_strstr(str1, to_find1);
    printf("Finding '%s' in '%s': %s\n", to_find1, str1, result1 ? result1 : "Not found");
    
    // Finding a non-existing substring (case-sensitive)
    char *result2 = ft_strstr(str2, to_find2);
    printf("Finding '%s' in '%s': %s\n", to_find2, str2, result2 ? result2 : "Not found");
    
    // Finding an empty substring
    char *result3 = ft_strstr(str3, to_find3);
    printf("Finding '%s' in '%s': %s\n", to_find3, str3, result3 ? result3 : "Not found");
    
    // Finding the whole string as a substring
    char *result4 = ft_strstr(str4, to_find4);
    printf("Finding '%s' in '%s': %s\n", to_find4, str4, result4 ? result4 : "Not found");
    
    return 0;
}
```
By following this guide, you should be able to understand the purpose of the ft_strstr function, how it works, and how to use it effectively in your programs.
