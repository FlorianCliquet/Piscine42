# ft_strncpy

## Description

The `ft_strncpy` function copies up to `n` characters from the string pointed to by `src` to the buffer pointed to by `dest`. If the length of `src` is less than `n`, the remainder of `dest` will be padded with null bytes (`'\0'`). 

## Function Prototype

```c
char	*ft_strncpy(char *dest, char *src, unsigned int n);
```

## Parameters
- char *dest: A pointer to the destination array where the content is to be copied.
- char *src: A pointer to the null-terminated string to be copied.
- unsigned int n: The maximum number of characters to be copied from src.

## Return Value
- Returns dest, the pointer to the destination string.

## Usage
Here's an example of how to use the ft_strncpy function:

```c
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_strncpy(dest, src, 10);
    printf("Copied string: %s\n", dest);

    return 0;
}
```
## Output:

```csharp
Copied string: Hello, Wor
```