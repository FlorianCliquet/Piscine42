# ft_putstr

## Explanation

The `ft_putstr` function outputs a string (`char *str`) to the standard output. This function iterates through the string character by character until it encounters the null terminator (`'\0'`), using the `write` system call to output each character to the console. It is a fundamental function for handling strings in C programming.

### Function Overview

The function `ft_putstr` is prototyped as `void ft_putstr(char *str);`. It takes a pointer to a character array (`char *str`) as a parameter.

### Implementation Details

- **Parameters:**
  - `str`: Pointer to a null-terminated string (`char *`).

- **Functionality:**
  - Initializes an integer variable `i` to iterate through the string.
  - Uses a while loop to iterate through the string until reaching the null terminator (`'\0'`).
  - Within the loop, uses the `write` function to write each character of the string to standard output (`write(1, &i[str], 1)`).
  - Increments the pointer `str` to move to the next character in the string.

### Example Usage

```c
#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    char *message = "Hello, world!";
    
    ft_putstr(message);
    
    return 0;
}
```
### Output
```
Hello, world!
```