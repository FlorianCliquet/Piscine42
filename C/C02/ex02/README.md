# ft_str_is_alpha

## Description

The `ft_str_is_alpha` function checks if a given string contains only alphabetic characters. If the string contains only alphabetic characters (either uppercase or lowercase), the function returns 1. Otherwise, it returns 0.

## Function Prototype

```c
int	ft_str_is_alpha(char *str);
```

## Parameters
- char *str: A pointer to the null-terminated string to be checked.

## Return Value
- Returns 1 if the string contains only alphabetic characters.
- Returns 0 if the string contains any non-alphabetic characters.

## Usage
Here's an example of how to use the ft_str_is_alpha function:
```c
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";

    printf("Is '%s' alphabetic? %d\n", str1, ft_str_is_alpha(str1));
    printf("Is '%s' alphabetic? %d\n", str2, ft_str_is_alpha(str2));

    return 0;
}
```
## Output:
```vbnet
Is 'HelloWorld' alphabetic? 1
Is 'Hello123' alphabetic? 0
```