# ft_point.h

## Introduction
The `ft_point.h` header file defines a structure `t_point` that represents a point in a 2-dimensional Cartesian coordinate system. This structure contains two integer members (`x` and `y`) representing the coordinates of the point.

## Problem Understanding
The main objective of `ft_point.h` is to provide a reusable structure definition (`t_point`) for representing points in a 2D space. This header file allows C programs to create and manipulate points using the `t_point` structure and its members (`x` and `y`).

## Structure Definition
1. **t_point Structure**:
   - `typedef struct s_point { int x; int y; } t_point;`: Defines a structure `t_point` with two integer members (`x` and `y`) representing the coordinates of a point in a 2D Cartesian coordinate system.

## Header Guard
The header file includes a header guard (`#ifndef FT_POINT_H ... #endif`) to prevent multiple inclusions of the same header file within a single translation unit, ensuring that its contents are only processed once by the preprocessor.

## How to Use the Header File
To use the `t_point` structure defined in `ft_point.h`:
- Include `ft_point.h` (`#include "ft_point.h"`) at the beginning of a C source file where points in a 2D space need to be defined or manipulated.
- Declare variables of type `t_point` to represent points and access their `x` and `y` coordinates as needed.

## Example Usage
Assume the following `main.c` file that utilizes the `t_point` structure defined in `ft_point.h`:
```c
#include <stdio.h>
#include "ft_point.h"

int main(void)
{
    t_point p1 = { 10, 20 };

    printf("Point p1: x = %d, y = %d\n", p1.x, p1.y);

    return 0;
}
```
This example demonstrates how ft_point.h can be used to define a point (p1) with coordinates (x = 10 and y = 20) and print its coordinates using the t_point structure.
