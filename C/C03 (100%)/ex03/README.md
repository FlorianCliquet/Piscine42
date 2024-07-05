# ft_strncat Function README

## Introduction
This README file explains how to understand and use the `ft_strncat` function. The `ft_strncat` function is designed to concatenate a specified number of characters from one string (source) to the end of another string (destination). It mimics the behavior of the standard `strncat` function found in the C standard library.

## Problem Comprehension
To solve the problem of concatenating a specified number of characters from the source string to the destination string, follow these steps:

1. **Initialization**: Begin by initializing an index to traverse the source string and determine the length of the destination string.
2. **Find Destination Length**: Loop through the destination string to find its length.
3. **Concatenation**: Loop through the source string up to the specified number of characters (`nb`):
   - Append each character from the source string to the end of the destination string.
   - Stop if the null terminator (`'\0'`) of the source string is reached before `nb` characters.
4. **Null-Termination**: After concatenating, add a null terminator (`'\0'`) to the end of the resulting string.
5. **Return Result**: Return the destination string.

## How to Use the Function
To use the `ft_strncat` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the destination string, source string, and the number of characters to concatenate (an unsigned integer `nb`) to it.
3. **Handle the Result**: The function returns the destination string with the source string concatenated up to `nb` characters.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_strncat`:

```c
#include <stdio.h>

// Function prototype
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
    // Test cases
    char dest1[20] = "Hello";
    char src1[] = " World";
    char dest2[20] = "Hello";
    char src2[] = "Beautiful World";
    char dest3[20] = "Hello";
    char src3[] = "";
    
    // Concatenating up to 6 characters
    char *result1 = ft_strncat(dest1, src1, 6);
    printf("Result after concatenating '%s' with '%s' up to 6 characters: %s\n", "Hello", " World", result1);
    
    // Concatenating up to 9 characters
    char *result2 = ft_strncat(dest2, src2, 9);
    printf("Result after concatenating '%s' with '%s' up to 9 characters: %s\n", "Hello", "Beautiful World", result2);
    
    // Concatenating with an empty source string
    char *result3 = ft_strncat(dest3, src3, 5);
    printf("Result after concatenating '%s' with an empty string up to 5 characters: %s\n", "Hello", result3);
    
    return 0;
}
```
By following this guide, you should be able to understand the purpose of the ft_strncat function, how it works, and how to use it effectively in your programs.
