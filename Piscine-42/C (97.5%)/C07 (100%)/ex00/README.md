# ft_strdup

## Introduction
The `ft_strdup` function is designed to duplicate a string (`src`) by dynamically allocating memory for a new string and copying the contents of `src` into it. It returns a pointer to the newly allocated string.

## Problem Understanding
The main objective of this function is to create a copy of the input string (`src`) using dynamically allocated memory (`malloc`). It handles cases where `src` is an empty string (`""`) or `NULL`.

## Steps to Understand the Problem

1. **Function Signatures**:
   - `int size(char *src)`: A utility function to calculate the length of the string `src` by iterating until the null terminator (`\0`) is encountered.
   - `char *ft_strdup(char *src)`: The main function that duplicates the string `src`.

2. **Memory Allocation**: 
   - Inside `ft_strdup`, memory is allocated using `malloc` to create a new string (`ptr`) of size `src_size + 1` (to include space for the null terminator).

3. **Error Handling**: 
   - The function checks if `malloc` successfully allocated memory. If `malloc` returns `NULL`, indicating failure to allocate memory, the function returns `NULL`.

4. **String Copying**:
   - Using a `while` loop, `ft_strdup` iterates through each character of `src` and copies it to the newly allocated `ptr` until the null terminator (`\0`) is encountered.

5. **Null Terminator**: 
   - After copying all characters, `ft_strdup` manually adds the null terminator (`\0`) to the end of `ptr` to ensure it is a valid C-string.

6. **Returning a Value**: 
   - Finally, `ft_strdup` returns the pointer `ptr`, which now points to a duplicated copy of `src` stored in dynamically allocated memory.

## How to Use the Function
To test the `ft_strdup` function, compile the program containing this function. Call `ft_strdup` with different input strings and ensure it correctly duplicates and returns a copy of each input string.

## Example Usage
Assume the compiled program is named `strdup_example`. When using `ft_strdup` to duplicate a string:
```c
#include <stdio.h>

int main(void)
{
    char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);
    if (duplicate)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); // Free allocated memory when done using it
    }
    return 0;
}
```
This example demonstrates how ft_strdup can be used to duplicate the string "Hello, world!" and print both the original and duplicated strings.

## Conclusion
Understanding the ft_strdup function involves understanding its purpose, memory allocation using malloc, string copying using a while loop, and how to verify its functionality through execution.