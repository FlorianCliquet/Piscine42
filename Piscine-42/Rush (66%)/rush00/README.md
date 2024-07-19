# Rush Functions README

## Introduction
The `rush` functions (`rush00.c`, `rush01.c`, `rush02.c`, `rush03.c`, `rush04.c`) provide implementations to generate different patterns of rectangular shapes using ASCII characters. Each function (`rush00`, `rush01`, `rush02`, `rush03`, `rush04`) draws a specific pattern based on given dimensions (`x` and `y`).

## Function Descriptions

### `rush00.c`
- **rush00**: Draws a rectangular pattern using ASCII characters 'o', '|', and '-'.
  - Top and bottom lines are formed by repeating 'o' and '-' respectively.
  - Side borders are formed by repeating '|' with spaces in between.

### `rush01.c`
- **rush01**: Draws a rectangular pattern using ASCII characters '/', '*', and ' '.
  - Top line is formed with '/' followed by '*' and ending with '+'.
  - Middle lines are formed with '*' surrounded by spaces.
  - Bottom line is formed with '*' followed by '/' and ending with '+'.

### `rush02.c`
- **rush02**: Draws a rectangular pattern using ASCII characters 'A', 'B', and ' '.
  - Top and bottom lines are formed by repeating 'A' and 'C' respectively.
  - Middle lines are formed with 'B' surrounded by spaces.

### `rush03.c`
- **rush03**: Draws a rectangular pattern using ASCII characters 'A', 'B', and ' '.
  - Top and bottom lines are formed by repeating 'A' and 'C' respectively.
  - Middle lines are formed with 'B' at the edges and spaces in between.

### `rush04.c`
- **rush04**: Draws a rectangular pattern using ASCII characters 'A', 'B', and ' '.
  - Top line is formed with 'A' followed by 'B' and ending with 'C'.
  - Middle lines are formed with 'B' at the edges and spaces in between.
  - Bottom line is formed with 'C' followed by 'B' and ending with 'A'.

## Usage
Each `rush` function takes two parameters `x` and `y` representing the dimensions of the rectangle to be drawn. The functions utilize the `ft_putchar` function to output characters.

## Example Usage
An example usage of these functions involves calling each `rush` function with different values of `x` and `y` to observe the generated patterns. This includes testing with various dimensions, including negative values to handle error conditions.

## Conclusion
Understanding the `rush` functions involves grasping their respective patterns and implementations using basic control structures and ASCII characters in C programming. By encapsulating these functionalities, they provide reusable solutions for generating ASCII art based on specified dimensions.

