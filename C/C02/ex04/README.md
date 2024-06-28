# ft_str_is_lowercase

## Description

The `ft_str_is_lowercase` function checks if a given string contains only lowercase alphabetic characters (a-z). If the string contains only lowercase characters, the function returns 1. Otherwise, it returns 0.

## Function Prototype

```c
int	ft_str_is_lowercase(char *str);
```

## Parameters
- char *str: A pointer to the null-terminated string to be checked.

## Return Value
- Returns 1 if the string contains only lowercase alphabetic characters.
- Returns 0 if the string contains any non-lowercase characters.

## Usage
Here's an example of how to use the ft_str_is_lowercase function:
```c
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{
    char str1[] = "hello";
    char str2[] = "Hello";

    printf("Is '%s' lowercase? %d\n", str1, ft_str_is_lowercase(str1));
    printf("Is '%s' lowercase? %d\n", str2, ft_str_is_lowercase(str2));

    return 0;
}
```
## Output:
```sql
Is 'hello' lowercase? 1
Is 'Hello' lowercase? 0
```