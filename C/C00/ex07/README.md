# ft_putnbr

## Overview

The `ft_putnbr` function is designed to output an integer (`nb`) to the standard output (usually the terminal). It handles both positive and negative integers using recursion and the `write` system call. This function is part of the curriculum at 42, a programming school.

## Requirements

- The function should be named `ft_putnbr`.
- The function should be prototyped as `void ft_putnbr(int nb);`.
- The function should use the `write` system call.
- The output should be sent to the standard output (file descriptor 1).
- The function should be placed in a file named `ft_putnbr.c`.
- The function should be submitted in a directory named `ex00/`.

## Usage

To use the `ft_putnbr` function, you need to include the `unistd.h` header for the `write` system call. Below is the implementation of the function:

```c
#include <unistd.h>

void print(char a)
{
    write(1, &a, 1);
}

void ft_putnbr(int nb)
{
    unsigned int n;

    if (nb < 0)
    {
        print('-');
        n = (-1) * nb;
    }
    else
    {
        n = nb;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        n = n % 10;
    }
    print(n + '0');
}
```

## Parameters
- nb: The integer value that needs to be printed to the standard output.

## Implementation Details
- The function print is used to print characters using the write system call.
- The function ft_putnbr handles both positive and negative integers (nb).
    - If nb is negative (nb < 0), it prints a '-' sign and converts nb to its absolute value (n = (-1) * nb).
    - If nb is positive or zero, it assigns n = nb.
    - The function recursively divides n by 10 (n / 10) until n becomes less than or equal to 9.
    - After reaching the smallest digit, each digit (n % 10) is converted to its character equivalent (n + '0') and printed.
- The recursion allows the function to handle each digit of the number from most significant to least significant.

## Further Explanation of the First Two Iterations
During the execution of ft_putnbr, the function recursively processes and prints each digit of the integer nb. Here's a breakdown of how the function handles the first two iterations:

### First Iteration
- Example (nb = 123):
    - The function starts with nb = 123.
    - It is not negative, so it proceeds with n = 123.
    - Since n > 9, it recursively calls ft_putnbr(n / 10), which becomes ft_putnbr(12).
    - Now, n = 123 % 10 = 3.
    - It prints 3 using print(3 + '0'), resulting in the output 123.

### Second Iteration
- Example (nb = -456):
    - The function starts with nb = -456.
    - nb < 0, so it prints '-' using print('-') and assigns n = (-1) * nb = 456.
    - Since n > 9, it recursively calls ft_putnbr(n / 10), which becomes ft_putnbr(45).
    - Now, n = 456 % 10 = 6.
    - It prints 6 using print(6 + '0'), resulting in the output -456.

Each iteration of ft_putnbr ensures that all digits of nb are printed in the correct order, including handling negative numbers by printing the '-' sign before processing the absolute value.

## What is happening during a Recursion

When a function calls itself recursively, it involves multiple instances of the same function executing concurrently. Each instance of the function, known as a "stack frame," has its own set of local variables and parameters stored in memory. Here's a step-by-step explanation of what happens in memory when a function calls itself recursively and how it manages to wait for the other instances to finish:

1. Function Invocation
- Initial Call: When a function is called for the first time, a new stack frame is created in memory. This frame contains space for parameters, local variables, and the return address.

2. Recursive Call
- Subsequent Calls: During the execution of the function, if a recursive call is encountered, a new stack frame is created for the new instance of the function.
- Memory Allocation: Each stack frame occupies a distinct portion of the stack memory. Local variables and parameters for each instance of the function are stored in their respective stack frames.

3. Stack Data Structure
- Stack Growth: Stack frames are typically organized in a Last-In-First-Out (LIFO) manner, where the most recent function call is on top of the stack.
- Return Address: Each stack frame includes the return address, which points to the next instruction to execute after the function completes.

4. Waiting for Completion
- Execution Order: Each recursive call pushes a new stack frame onto the call stack. The function execution proceeds from the outermost (initial) call down through each nested call.
- Completion of Calls: As each recursive call completes its task, it returns control to the previous instance of the function. This process continues until all recursive calls have been completed.
- Stack Unwinding: Once a recursive call finishes, its stack frame is popped off the call stack, and execution resumes from the return address stored in the previous stack frame.

5. Synchronization
- Sequential Execution: Recursion ensures that each recursive call waits for its nested calls to complete before proceeding. This sequential nature is enforced by the LIFO structure of the call stack.
- Resource Management: Each function instance manages its own set of resources (such as local variables), ensuring that they do not interfere with variables in other instances.
