# ft_split.c README

## Introduction
The `ft_split.c` file provides functions to split a string (`str`) into substrings based on a set of separator characters (`charset`). It includes helper functions for string manipulation and memory allocation to achieve this functionality.

## Problem Understanding
The primary goal of `ft_split.c` is to split a given string (`str`) into multiple substrings based on specified separator characters (`charset`). It ensures that each substring is allocated dynamically and properly terminated, with the final array of substrings terminated by a `NULL` pointer.

## Implementation Details
### Helper Functions
- **is_separator**: Determines if a character (`c`) is a separator based on a given character set (`charset`).
- **ft_strncpy**: Copies a specified number of characters (`n`) from source (`src`) to destination (`dest`), ensuring null-termination.
- **strlen**: Calculates the length of a null-terminated string (`str`).

### Main Function: `ft_split`
- **ft_split**: Splits the input string (`str`) into an array of substrings based on separator characters (`charset`).
  - Dynamically allocates memory for an array of strings (`result`).
  - Calls `process_substrings` to populate `result` with the split substrings.
  - Ensures proper memory allocation and null-termination of the resulting array.

### Process Function: `process_substrings`
- **process_substrings**: Iterates through the input string (`str`) to identify and extract substrings based on `charset`.
  - Allocates memory for each substring found.
  - Copies the substring into the allocated memory.
  - Handles edge cases, such as consecutive separators and empty substrings.

## Usage
The `ft_split.c` file can be utilized by including its header and calling the `ft_split` function with appropriate arguments (`str` and `charset`). Ensure proper memory management for the returned array of substrings and handle error conditions, such as `NULL` returns.

## Example Usage
An example usage of `ft_split` could involve splitting a sentence into individual words based on spaces or punctuation marks. Ensure to test various scenarios, including empty strings and different separator characters, to verify the robustness of the implementation.

## Conclusion
Understanding `ft_split.c` involves grasping its string manipulation techniques, memory allocation strategies, and handling of separator characters to split strings effectively. By encapsulating these functionalities, it provides a reusable and efficient solution for splitting strings based on specified criteria in C programming.

