# ft_convert_base

## Introduction
The `ft_convert_base` function is designed to convert a number from one base to another base. It takes a number (`nbr`) represented as a string in a given base (`base_from`) and converts it to another base (`base_to`). It dynamically allocates memory for the resulting converted number and returns a pointer to it.

## Problem Understanding
The main objective of this function is to handle conversions between different numeral systems (bases). It verifies the validity of the input bases (`base_from` and `base_to`), skips whitespace and signs in the input number (`nbr`), converts the number from the source base to a decimal (base 10), and then converts the decimal number to the target base.

## Steps to Understand the Problem

1. **Function Signatures**:
   - `int check(char *base)`: A utility function to verify the validity of a base (no duplicate characters, no sign characters, etc.).
   - `char *skip_whitespace_and_signs(char *str, int *neg)`: A function to skip leading whitespace and handle negative signs (`-`) in the input string.
   - `unsigned int base_to_dec(char *str, char *base, int basesize)`: Converts a number in a given base (`base`) represented as a string (`str`) to a decimal (`unsigned int`).
   - `char *dec_to_base(unsigned int nb, char *base, int basesize, int neg)`: Converts a decimal (`nb`) to a string representation in a given base (`base`).
   - `char *ft_convert_base(char *nbr, char *base_from, char *base_to)`: The main function that performs the base conversion and returns the result.

2. **Base Verification**:
   - Inside `check`, the function verifies that the base contains valid characters and has at least two different characters. It returns the size of the base if valid, otherwise returns `0`.

3. **Input Processing**:
   - `skip_whitespace_and_signs` skips over leading whitespace and handles negative signs (`-`) in the input number (`nbr`). It modifies the `neg` variable to indicate whether the number is negative.

4. **Base Conversion**:
   - `base_to_dec` converts a number (`str`) from a given base (`base`) to a decimal (`unsigned int`) using iterative multiplication and addition.
   - `dec_to_base` converts a decimal (`nb`) to a string representation in a given base (`base`) using iterative division and remainder operations.

5. **Memory Allocation**:
   - Inside `ft_convert_base`, memory is allocated using `malloc` to create a new string (`str`) containing the converted number.

6. **Error Handling**:
   - The function checks the validity of `base_from` and `base_to`. If either base is invalid, it returns `NULL`.

7. **Returning a Value**:
   - Finally, `ft_convert_base` returns the pointer `str`, which now points to the dynamically allocated string containing the number converted from `base_from` to `base_to`.

## How to Use the Function
To test the `ft_convert_base` function, compile the program containing this function. Call `ft_convert_base` with different values of `nbr`, `base_from`, and `base_to` and ensure it correctly converts and returns the resulting string in the target base.

## Example Usage
Assume the compiled program is named `convert_base_example`. When using `ft_convert_base` to convert a number from one base to another:
```c
#include <stdio.h>

int main(void)
{
    char *nbr = "42";
    char *base_from = "0123456789";
    char *base_to = "01";
    char *result = ft_convert_base(nbr, base_from, base_to);
    if (result)
    {
        printf("Converted number: %s\n", result);
        free(result); // Free allocated memory when done using it
    }
    return 0;
}
```
This example demonstrates how ft_convert_base can be used to convert the number "42" from base 0123456789 (decimal) to base 01 (binary) and print the resulting converted number.

## Conclusion

Understanding the ft_convert_base function involves understanding its purpose, input validation for bases, input processing to skip whitespace and signs, conversion algorithms between bases, memory allocation using malloc, error handling for invalid bases, and how to verify its functionality through execution.
