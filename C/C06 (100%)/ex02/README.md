# ft_rev_params

## Introduction
The `ft_rev_params` function is designed to print all command-line arguments passed to the program in reverse order, each on a new line.

## Problem Understanding
The main objective of this function is to iterate through each command-line argument (`argv`) starting from the last argument (`argv[argc-1]`) and print each argument followed by a newline. It handles cases where no arguments are passed.

## Steps to Understand the Problem

1. **Function Signature**: The function `main(int argc, char **argv)` indicates a C program that accepts command-line arguments.

2. **Initialization**: The integer `i` is initialized to `argc - 1` to start iterating from the last argument (`argv[argc-1]`), assuming `argv[0]` is the program name itself.

3. **Argument Check**: Check the condition `if (argc < 2)` within the `main` function. This condition ensures that there are arguments to process (`argc` includes the program name).

4. **Reverse Iteration**: There is a `while` loop that starts from `i = argc - 1` and decrements `i` until it reaches `1`. This ensures that arguments are printed in reverse order.

5. **Nested Loops**: Inside the loop, there is an inner loop that iterates through each character of the current argument (`*str`).

6. **Character Output**: Inside the inner loop, each character of `argv[i]` is outputted using the `write` function, which writes to the standard output (file descriptor 1).

7. **Newline After Each Argument**: After printing each argument, the function writes a newline character (`\n`) to ensure each argument appears on a new line.

8. **Decrementing Loop Counter**: The outer loop counter (`i`) is decremented after printing each argument to move to the previous argument in the `argv` array.

9. **Returning a Value**: The function returns `0` to indicate successful execution.

## How to Use the Function
To test the `ft_rev_params` function, compile the program containing this function. Execute the compiled binary with different command-line arguments and observe the output. Each argument should be printed in reverse order, with each on a new line.

## Example Usage
Assume the compiled program is named `rev_params`. When executed with multiple arguments from the command line:
```
$ ./rev_params hello world 42
42
world
hello
```

This output demonstrates that the function correctly prints each command-line argument in reverse order on a new line.

## Conclusion
Understanding the `ft_rev_params` function involves understanding its purpose, the logic used to iterate through and print each argument in reverse order, and how to verify its functionality through execution.