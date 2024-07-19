# ft_strlcat Function README

## Introduction
This README file explains how to understand and use the `ft_strlcat` function. The `ft_strlcat` function is designed to concatenate two strings with a specified buffer size. It mimics the behavior of the standard `strlcat` function found in the C standard library.

## Problem Comprehension
To solve the problem of concatenating a source string to a destination string with a specified buffer size, follow these steps:

1. **Calculate Lengths**: Determine the length of the destination string and the source string.
2. **Buffer Size Check**: If the specified buffer size is 0 or less than the length of the destination string, return the sum of the source string length and the buffer size.
3. **Concatenation**: Loop through the source string and append its characters to the destination string until the buffer size is reached or the end of the source string is reached:
   - Append each character from the source string to the end of the destination string.
   - Stop if the buffer size minus the destination length minus one is reached.
4. **Null-Termination**: After concatenating, add a null terminator (`'\0'`) to the end of the resulting string.
5. **Return Result**: Return the sum of the source string length and the original destination string length.

## How to Use the Function
To use the `ft_strlcat` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the destination string, source string, and the buffer size (an unsigned integer `size`) to it.
3. **Handle the Result**: The function returns the total length of the string it tried to create, which is the initial length of the destination string plus the length of the source string.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_strlcat`:

```c
#include <stdio.h>

// Function prototypes
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);

int main() {
    // Test cases
    char dest1[20] = "Hello";
    char src1[] = " World";
    char dest2[15] = "Hello";
    char src2[] = "Beautiful";
    char dest3[20] = "Hello";
    char src3[] = " World!";
    char dest4[10] = "Hi";
    char src4[] = " There!";
    
    // Concatenating with sufficient buffer size
    unsigned int result1 = ft_strlcat(dest1, src1, 20);
    printf("Result after concatenating '%s' with '%s' with size 20: %s, Total length: %u\n", "Hello", " World", dest1, result1);
    
    // Concatenating with buffer size smaller than required
    unsigned int result2 = ft_strlcat(dest2, src2, 15);
    printf("Result after concatenating '%s' with '%s' with size 15: %s, Total length: %u\n", "Hello", "Beautiful", dest2, result2);
    
    // Concatenating with exact buffer size
    unsigned int result3 = ft_strlcat(dest3, src3, 12);
    printf("Result after concatenating '%s' with '%s' with size 12: %s, Total length: %u\n", "Hello", " World!", dest3, result3);
    
    // Concatenating with insufficient buffer size
    unsigned int result4 = ft_strlcat(dest4, src4, 10);
    printf("Result after concatenating '%s' with '%s' with size 10: %s, Total length: %u\n", "Hi", " There!", dest4, result4);
    
    return 0;
}
```

By following this guide, you should be able to understand the purpose of the ft_strlcat function, how it works, and how to use it effectively in your programs.
