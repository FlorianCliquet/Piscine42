# ft_strupcase

## Description

The `ft_strupcase` function converts all lowercase alphabetic characters in a null-terminated string to their corresponding uppercase characters. The conversion is based on ASCII values, where lowercase letters have ASCII values ranging from 'a' (97) to 'z' (122), and uppercase letters have ASCII values ranging from 'A' (65) to 'Z' (90). Non-alphabetic characters remain unchanged.

## Function Prototype

```c
char	*ft_strupcase(char *str);
```

## Parameters
- char *str: A pointer to the null-terminated string to be converted.

## Return Value
- Returns a pointer to the modified string str, where all lowercase letters are converted to uppercase.

## Usage
Here's an example of how to use the ft_strupcase function:

```c
#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", ft_strupcase(str));

    return 0;
}
```

## Output:
```c
Original string: Hello, World!
Uppercase string: HELLO, WORLD!
```