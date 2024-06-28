# ft_strcpy

## Description

The `ft_strcpy` function copies the string pointed to by `src`, including the terminating null byte (`'\0'`), to the buffer pointed to by `dest`. The strings may not overlap, and the destination string `dest` must be large enough to receive the copy.

## Function Prototype

```c
char	*ft_strcpy(char *dest, char *src);
```

## Parameters
- char *dest: A pointer to the destination array where the content is to be copied.
- char *src: A pointer to the null-terminated string to be copied.

## Return Value
- Returns dest, the pointer to the destination string.

## Usage
Here's an example of how to use the ft_strcpy function:

```c
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    ft_strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}
```
## Output:
```c
Copied string: Hello, World!
```
