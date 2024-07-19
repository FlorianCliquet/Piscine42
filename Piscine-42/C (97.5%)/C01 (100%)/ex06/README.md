# ft_strlen

## Explanation

The `ft_strlen` function calculates the length of a string (`char *str`) by iterating through it until it reaches the null terminator (`'\0'`). This function is essential for determining the size of strings in C programming without relying on library functions like `strlen` from `<string.h>`.

### Function Overview

The function `ft_strlen` is prototyped as `int ft_strlen(char *str);`. It takes a pointer to a null-terminated string (`char *str`) as a parameter and returns an integer representing the length of the string.

### Implementation Details

- **Parameters:**
  - `str`: Pointer to a null-terminated string (`char *`).

- **Functionality:**
  - Initializes an integer variable `i` to count the characters in the string.
  - Uses a while loop to iterate through the string until it encounters the null terminator (`'\0'`).
  - Increments the integer variable `i` for each character found in the string.
  - Returns the final value of `i`, which represents the length of the string excluding the null terminator.

### Example Usage

```c
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *message = "Hello, world!";
    int length = ft_strlen(message);

    printf("Length of '%s' is %d\n", message, length);
    
    return 0;
}
```
### Output
```csharp
Length of 'Hello, world!' is 13
```