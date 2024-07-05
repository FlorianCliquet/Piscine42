# ft_sort_params

## Introduction
The `ft_sort_params` function is designed to sort all command-line arguments passed to the program in lexicographical order (dictionary order) and print each sorted argument on a new line.

## Problem Understanding
The main objective of this function is to sort the command-line arguments (`argv`) alphabetically and print each argument followed by a newline. It handles cases where no arguments are passed.

## Steps to Understand the Problem

1. **Function Signatures**: 
   - `void ft_putchar(char c)`: A utility function to write a single character (`c`) to the standard output.
   - `int ft_strcmp(char *s1, char *s2)`: A function to compare two strings (`s1` and `s2`) lexicographically and return an integer less than, equal to, or greater than zero if `s1` is found, respectively, to be less than, to match, or be greater than `s2`.
   - `void ft_strswap(char **a, char **b)`: A function to swap two pointers to strings (`a` and `b`).
   - `void ft_sort_str_tab(char **tab, int size)`: A function to sort an array of strings (`tab`) of size (`size`) using the `ft_strcmp` function and `ft_strswap` function.

2. **Sorting Mechanism**: 
   - The `ft_sort_str_tab` function implements the Bubble Sort algorithm to sort the array of strings (`argv + 1`, which excludes the program name) in ascending order.
   - It compares adjacent strings using `ft_strcmp` and swaps them if they are out of order until the array is sorted.

3. **Main Function Execution**:
   - The `main` function sorts the command-line arguments (`argv`) using `ft_sort_str_tab`.
   - It iterates through the sorted array and prints each argument followed by a newline using `ft_putchar`.

4. **Handling Edge Cases**: 
   - The function checks if `argc` is less than 2 to ensure there are arguments to sort and print.

5. **Returning a Value**: 
   - The `main` function returns `0` to indicate successful execution.

## How to Use the Function
To test the `ft_sort_params` function, compile the program containing this function. Execute the compiled binary with different command-line arguments and observe the output. Each argument should be printed in sorted order, with each on a new line.

## Example Usage
Assume the compiled program is named `sort_params`. When executed with multiple arguments from the command line:
```
$ ./sort_params hello world 42
42
hello
world
```

This output demonstrates that the function correctly sorts each command-line argument alphabetically and prints each on a new line.

## Conclusion
Understanding the `ft_sort_params` function involves understanding its purpose, the sorting logic implemented using Bubble Sort, and how to verify its functionality through execution.