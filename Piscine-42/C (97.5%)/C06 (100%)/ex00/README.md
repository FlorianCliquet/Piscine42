# ft_print_program_name

## Introduction
The `ft_print_program_name` function is designed to print the name of the program itself. It reads the name of the executable and outputs it to the standard output.

## Problem Understanding
The main objective of this function is to print the name of the program without using any command-line arguments (`argv`). It should simply output the program's name followed by a newline character.

## Steps to Understand the Problem

1. **Function Signature**: Understand the function's signature and its purpose. In this case, `int main(int argc, char **argv)` indicates a C program that takes command-line arguments.

2. **Condition Checking**: Check the condition `if (argc < 1)` within the `main` function. This condition ensures that there is at least one argument (the program's name itself).

3. **Iterating through Arguments**: Notice the use of `while (*argv[0])` loop. This loop iterates through each character of `argv[0]`, which represents the name of the program.

4. **Outputting Characters**: Inside the loop, each character of `argv[0]` is outputted using the `write` function, which writes to the standard output (file descriptor 1).

5. **Adding a Newline**: Finally, after printing the program name, the function writes a newline character (`\n`) to ensure proper formatting.

6. **Returning a Value**: The function returns `0` to indicate successful execution.

## How to Use the Function
To test the `ft_print_program_name` function, compile the program containing this function. Execute the compiled binary, and observe the output. It should display the name of the program itself followed by a newline.

## Example Usage
Assume the compiled program is named `print_name`. When executed from the command line:
```
$ ./print_name
print_name
```


This output demonstrates that the function correctly prints the name of the program.

## Conclusion
Understanding the `ft_print_program_name` function involves grasping its purpose, the logic used to extract and print the program's name, and how to validate its functionality through execution.
