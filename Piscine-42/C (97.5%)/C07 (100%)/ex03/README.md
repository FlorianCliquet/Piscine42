# ft_strjoin

## Introduction
The `ft_strjoin` function is designed to concatenate multiple strings (`strs`) with a separator (`sep`) between each string. It dynamically allocates memory for the resulting concatenated string and returns a pointer to it.

## Problem Understanding
The main objective of this function is to concatenate an array of strings (`strs`) with a specified separator (`sep`) between each string. It handles cases where `strs` is empty (`size = 0`), where `sep` is an empty string (`""`), and manages memory allocation efficiently.

## Steps to Understand the Problem

1. **Function Signatures**:
   - `int ft_len(char *str)`: A utility function to calculate the length of the string `str`.
   - `char *allocate_memory(int size, char **strs, char *sep)`: A function to calculate and allocate memory for the concatenated string.
   - `void copy_strings(int size, char **strs, char *sep, char *ptr)`: A function to copy each string from `strs` into the allocated memory, inserting `sep` where necessary.
   - `char *ft_strjoin(int size, char **strs, char *sep)`: The main function that concatenates the strings and returns the result.

2. **Memory Allocation**:
   - Inside `allocate_memory`, memory is allocated using `malloc` to create a new string (`ptr`) of sufficient size to hold all strings in `strs` and separators `sep`.

3. **Error Handling**:
   - The function checks if `malloc` successfully allocated memory. If `malloc` returns `NULL`, indicating failure to allocate memory, the function returns `NULL`.

4. **String Concatenation**:
   - Using `copy_strings`, `ft_strjoin` iterates through each string in `strs`, copying it into `ptr`, and inserting `sep` between strings where necessary.

5. **Returning a Value**:
   - Finally, `ft_strjoin` returns the pointer `ptr`, which now points to the dynamically allocated string containing the concatenated result of all strings in `strs` with separators `sep`.

6. **Edge Case Handling**:
   - If `size` is `0`, indicating no strings in `strs`, `ft_strjoin` allocates a single-character string (`\0`) to handle this case.

## How to Use the Function
To test the `ft_strjoin` function, compile the program containing this function. Call `ft_strjoin` with different values of `size`, `strs`, and `sep` and ensure it correctly concatenates and returns the resulting string.

## Example Usage
Assume the compiled program is named `strjoin_example`. When using `ft_strjoin` to concatenate an array of strings with a separator:
```c
#include <stdio.h>

int main(void)
{
    char *strs[] = {"Hello", "world", "42"};
    char *sep = ", ";
    int size = 3;
    char *result = ft_strjoin(size, strs, sep);
    if (result)
    {
        printf("Concatenated string: %s\n", result);
        free(result); // Free allocated memory when done using it
    }
    return 0;
}
```
This example demonstrates how ft_strjoin can be used to concatenate the strings "Hello", "world", and "42" with the separator ", " and print the resulting concatenated string.

## Conclusion

Understanding the ft_strjoin function involves understanding its purpose, memory allocation using malloc, string concatenation using copy_strings, handling of edge cases such as empty input arrays or separators, and how to verify its functionality through execution.
