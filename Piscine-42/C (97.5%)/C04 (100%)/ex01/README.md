# ft_putstr Function README

## Introduction
This README file explains how to understand and use the `ft_putstr` function. The `ft_putstr` function is designed to print a given string to the standard output (usually the terminal). It mimics the behavior of the standard `puts` function found in the C standard library.

## Problem Comprehension
To solve the problem of printing a string to the standard output, follow these steps:

1. **Initialization**: Begin by initializing an index to traverse the string.
2. **Traversal and Printing**: Loop through the string character by character until the null terminator (`'\0'`) is reached:
   - For each character, use the `write` system call to print it to the standard output.
   - Increment the index to move to the next character.
3. **End of String**: The loop continues until the null terminator is encountered, ensuring the entire string is printed.

## How to Use the Function
To use the `ft_putstr` function, follow these steps:

1. **Include the Function**: Ensure the function is included in your program file.
2. **Call the Function**: Use the function by passing the string you want to print.
3. **Observe the Output**: The function does not return a value but prints the string to the standard output.

## Testing the Function
To test the function, you can create a `main` function. Here is a sample structure of the `main` function to test `ft_putstr`:

```c
#include <unistd.h>

// Function prototype
void ft_putstr(char *str);

int main() {
    // Test cases
    char str1[] = "Hello, World!";
    char str2[] = "";
    char str3[] = "42";
    char str4[] = "This is a longer string with multiple words.";
    
    // Printing strings
    ft_putstr(str1);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putstr(str2);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putstr(str3);
    write(1, "\n", 1);  // Newline for better readability
    
    ft_putstr(str4);
    write(1, "\n", 1);  // Newline for better readability
    
    return 0;
}
```