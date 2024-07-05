# ft_abs.h

## Introduction
The `ft_abs.h` header file defines a macro `ABS(Value)` that computes the absolute value of a given integer `Value`. This header file is designed to be included in C programs where absolute values are needed.

## Problem Understanding
The main objective of `ft_abs.h` is to provide a macro (`ABS(Value)`) that calculates the absolute value of an integer. This macro is useful for scenarios where the absolute magnitude of a number is required, irrespective of its sign.

## Macro Definition
1. **ABS(Value)**:
   - `#define ABS(Value) ((Value < 0) ? -Value : Value)`: Macro that computes the absolute value of `Value`. If `Value` is negative (`Value < 0`), it returns `-Value` (negative of `Value`), otherwise it returns `Value` itself.

## Header Guard
The header file includes a header guard (`#ifndef FT_ABS_H ... #endif`) to prevent multiple inclusions of the same header file within a single translation unit, ensuring that its contents are only processed once by the preprocessor.

## How to Use the Header File
To use the `ABS(Value)` macro defined in `ft_abs.h`:
- Include `ft_abs.h` (`#include "ft_abs.h"`) at the beginning of a C source file where absolute values are needed.
- Utilize `ABS(Value)` to compute the absolute value of an integer `Value` at compile-time.

## Example Usage
Assume the following `main.c` file that utilizes the `ABS(Value)` macro defined in `ft_abs.h`:
```c
#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
    int x = -10;
    int abs_x = ABS(x);

    printf("The absolute value of %d is %d\n", x, abs_x);

    return 0;
}
```
This example demonstrates how ft_abs.h can be used to calculate the absolute value of an integer (x) and print the result (abs_x) using the ABS(x) macro.