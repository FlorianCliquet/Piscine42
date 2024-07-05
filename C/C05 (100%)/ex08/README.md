### ft_ten_queens_puzzle Function README

## Introduction
This README explains how the `ft_ten_queens_puzzle` function works, focusing on its use of backtracking to solve the Ten Queens Puzzle.

## Understanding the Problem
The Ten Queens Puzzle involves placing 10 queens on a 10x10 chessboard in such a way that no two queens threaten each other. This means no two queens can share the same row, column, or diagonal.

## Approach Using Backtracking
Backtracking is a systematic method to explore all possible configurations of the queens on the board, ensuring that each configuration is valid before moving forward. Here's how the `ft_ten_queens_puzzle` function uses backtracking:

1. **Initialization**: The function initializes an array `board` of size 10 to keep track of the positions of queens. Initially, all elements of `board` are set to 0.

2. **Recursive Solver Function (`solve`)**:
   - **Base Case**: If `col` (column index) reaches 10, it means all columns have been successfully filled with queens (since columns are indexed from 0 to 9). At this point, a valid configuration of the board has been found, and the function prints this configuration using `print_sol` function and increments the `count` of solutions.
   - **Recursive Case**: For each column (`col`), iterate through each row (`i`):
     - Check if placing a queen at position `(i, col)` is safe using the `issafe` function.
     - If safe, mark `board[col] = i` (place a queen at row `i` in column `col`) and recursively call `solve` for the next column (`col + 1`).
     - If placing a queen leads to an invalid configuration (not safe), backtrack by trying the next row (`i++`).

3. **Safety Check (`issafe` Function)**:
   - Checks whether placing a queen at `(row, col)` conflicts with any previously placed queens:
     - It ensures no two queens are in the same row (`board[i] == row`).
     - It checks no two queens are on the same diagonal (`board[i] - i == row - col` and `board[i] + i == row + col`).

4. **Print Solution (`print_sol` Function)**:
   - Prints out the current valid configuration of the board when a solution is found.

5. **Counting Solutions**: The function keeps track of the number of valid solutions found using the `count` variable, which is passed by reference to the `solve` function.

## How to Use the Function
To use the `ft_ten_queens_puzzle` function:
- Include the function in your program.
- Call `ft_ten_queens_puzzle()` to find and count all unique solutions to the Ten Queens Puzzle.
- The function returns the total number of valid configurations (solutions) found.

## Example
Here's a simple example of using `ft_ten_queens_puzzle`:

```c
#include <stdio.h>

// Function prototype
int ft_ten_queens_puzzle(void);

int main() {
    int num_solutions = ft_ten_queens_puzzle();
    printf("Number of solutions to the Ten Queens Puzzle: %d\n", num_solutions);
    return 0;
}
```