# ft_strlcpy

## Description

The `ft_strlcpy` function copies a null-terminated string `src` to the memory pointed to by `dest`, up to a maximum of `size - 1` characters, ensuring that `dest` is null-terminated. Unlike `strcpy`, `strlcpy` ensures that `dest` is always null-terminated even if the source string is longer than `size - 1`.

## Function Prototype

```c
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
```
## Parameters
- char *dest: A pointer to the destination buffer where the string is to be copied.
- const char *src: A pointer to the source string to be copied.
- unsigned int size: The maximum number of bytes to copy, including the null-terminator.

## Return Value
- Returns the length of the string src, i.e., the total number of characters copied from src to dest, excluding the null-terminator.

## Usage
Here's an example of how to use the ft_strlcpy function:

```c
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);

int main()
{
    char dest[20];
    const char src[] = "Hello, world!";

    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);
    printf("Length of copied string: %u\n", len);

    return 0;
}
```
## Output:
```c
Copied string: Hello, world!
Length of copied string: 13
```