# ft_split

## Introduction
The `ft_split` function is designed to split a string (`str`) into substrings based on a set of separator characters (`charset`). It dynamically allocates memory for an array of strings (`result`) where each element is a substring of `str` that is separated by characters found in `charset`. The function returns a pointer to this array of strings.

## Problem Understanding
The main objective of this function is to parse a string (`str`) and split it into multiple substrings based on specified separator characters (`charset`). It skips over consecutive occurrences of separators and allocates memory for each substring found, storing them in the `result` array. The function handles cases where `str` or `charset` might be `NULL`, and ensures proper memory allocation for the resulting array of substrings.

## Steps to Understand the Problem

1. **Function Signatures**:
   - `int is_separator(char c, char *charset)`: A utility function to check if a character `c` is a separator (found in `charset`).
   - `char *ft_strncpy(char *dest, char *src, unsigned int n)`: A function similar to `strncpy` to copy a substring from `src` to `dest`.
   - `void process_substrings(char *str, char *charset, char **result)`: A function to iterate through `str`, identify substrings separated by `charset`, allocate memory for each substring, and store them in `result`.
   - `char **ft_split(char *str, char *charset)`: The main function that splits `str` into substrings based on `charset` and returns the resulting array of strings (`result`).

2. **Input Validation**:
   - Inside `ft_split`, it checks if `str` or `charset` is `NULL`. If either is `NULL`, it returns `NULL` to indicate an error.

3. **Memory Allocation**:
   - Memory is allocated using `malloc` inside `ft_split` to create an array `result` of pointers to strings (`char *`). The size of the array is determined based on the length of `str`.

4. **Substrings Extraction**:
   - `process_substrings` iterates through `str`, identifies segments of text that are not separators (`charset`), allocates memory for each substring found, and stores them sequentially in `result`.

5. **Null-termination**:
   - The last element of `result` is set to `NULL` to signify the end of the array of strings.

6. **Error Handling**:
   - The function checks if memory allocation (`malloc`) was successful. If not, it returns `NULL` to indicate failure.

7. **Returning a Value**:
   - Finally, `ft_split` returns the pointer `result`, which points to the dynamically allocated array of strings (`char **`) containing the substrings extracted from `str` based on `charset`.

## How to Use the Function
To test the `ft_split` function, compile the program containing this function. Call `ft_split` with different values of `str` and `charset`, and ensure it correctly splits `str` into substrings based on `charset` and returns the resulting array of strings.

## Example Usage
Assume the compiled program is named `split_example`. When using `ft_split` to split a string `str` into substrings using `charset`:
```c
#include <stdio.h>

int main(void)
{
    char *str = "Hello, world! This is a test.";
    char *charset = " ,!";
    char **result = ft_split(str, charset);
    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("Substring %d: %s\n", i + 1, result[i]);
            free(result[i]); // Free each substring when done using it
            i++;
        }
        free(result); // Free allocated memory for the array of strings
    }
    return 0;
}
```
This example demonstrates how ft_split can be used to split the string "Hello, world! This is a test." into substrings based on the characters , ,, and !, and print each substring.

## Conclusion

Understanding the ft_split function involves understanding its purpose, input validation for str and charset, substring extraction based on charset, memory allocation using malloc, error handling for failed memory allocation, and how to verify its functionality through execution.
