# ft_print_params

## Introduction
The `ft_print_params` function is designed to print all command-line arguments passed to the program, each on a new line.

## Problem Understanding
The main objective of this function is to iterate through each command-line argument (`argv`), print each argument followed by a newline, and handle cases where no arguments are passed.

## Steps to Understand the Problem

1. **Function Signature**: The function `main(int argc, char **argv)` indicates a C program that accepts command-line arguments.

2. **Initialization**: The integer `i` is initialized to `1` to start iterating from the first argument (`argv[1]`), assuming `argv[0]` is the program name itself.

3. **Argument Check**: Check the condition `if (argc < 2)` within the `main` function. This condition ensures that there are arguments to process (`argc` includes the program name).

4. **Nested Loops**: There is an outer loop that iterates through each argument (`argv[i]`) and an inner loop that iterates through each character of the argument (`*str`).

5. **Character Output**: Inside the inner loop, each character of `argv[i]` is outputted using the `write` function, which writes to the standard output (file descriptor 1).

6. **Newline After Each Argument**: After printing each argument, the function writes a newline character (`\n`) to ensure each argument appears on a new line.

7. **Incrementing Loop Counter**: The outer loop counter (`i`) is incremented after printing each argument to move to the next argument in the `argv` array.

8. **Returning a Value**: The function returns `0` to indicate successful execution.

## How to Use the Function
To test the `ft_print_params` function, compile the program containing this function. Execute the compiled binary with different command-line arguments and observe the output. Each argument should be printed on a new line.

## Example Usage
Assume the compiled program is named `print_params`. When executed with multiple arguments from the command line:
```
$ ./print_params hello world 42
hello
world
42
```

This output demonstrates that the function correctly prints each command-line argument on a new line.

## Conclusion
Understanding the `ft_print_params` function involves understanding its purpose, the logic used to iterate through and print each argument, and how to verify its functionality through execution.
