# ft_str_is_printable

## Description

The `ft_str_is_printable` function checks if a given string contains only printable characters from the ASCII table. Printable characters are those that can be displayed and are represented by ASCII codes ranging from 32 (space) to 126 (tilde '~'). If the string contains only printable characters, the function returns 1. Otherwise, it returns 0.

## Function Prototype

```c
int	ft_str_is_printable(char *str);
```

## Parameters
- char *str: A pointer to the null-terminated string to be checked.

## Return Value
- Returns 1 if the string contains only printable ASCII characters (ASCII codes from 32 to 126).
- Returns 0 if the string contains any non-printable characters.

## Usage
Here's an example of how to use the ft_str_is_printable function:


```c
#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, \nWorld!";

    printf("Is '%s' printable? %d\n", str1, ft_str_is_printable(str1));
    printf("Is '%s' printable? %d\n", str2, ft_str_is_printable(str2));

    return 0;
}
```
## Output:
```sql
Is 'Hello, World!' printable? 1
Is 'Hello, \nWorld!' printable? 0
```