# ft_strcapitalize

## Description

The `ft_strcapitalize` function modifies a string such that each word begins with an uppercase letter and all other letters are converted to lowercase. Words are sequences of alphanumeric characters delimited by any character that is not alphanumeric.

## Function Prototype

```c
char	*ft_strcapitalize(char *str);
```

## Parameters
- char *str: A pointer to the null-terminated string to be modified.

## Return Value
- Returns a pointer to the modified string str, where each word starts with an uppercase letter and all other letters are lowercase.

## Usage

Here's an example of how to use the ft_strcapitalize function:

```c
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
    char str[] = "hello, wORld! 42things - yes, 42wow";

    printf("Original string: %s\n", str);
    printf("Capitalized string: %s\n", ft_strcapitalize(str));

    return 0;
}
```

## Output:

```yaml
Original string: hello, wORld! 42things - yes, 42wow
Capitalized string: Hello, World! 42things - Yes, 42wow
```

## Detail explanation
The function ft_strcapitalize works as follows:

1. Initialization: An integer i is initialized to 0. This variable will be used to traverse the str string.

2. Character Check Loop: A while loop iterates through each character of the str string until the null terminator ('\0') is encountered. For each character, it checks various conditions to determine whether to convert it to uppercase or lowercase.
    - **Condition 1**: If i is 0 (the first character) and it is numeric (ft_char_is_numeric(str[i]) returns true), convert it to uppercase using ft_char_to_uppercase(str[i]).
    - **Condition 2**: If the previous character str[n] (where n = i - 1) is neither alphabetic (ft_char_is_alpha(str[n]) returns false) nor numeric (ft_char_is_numeric(str[n]) returns false), convert the current character str[i] to uppercase.
    - **Condition 3**: If the current character str[i] is alphabetic (ft_char_is_alpha(str[i]) returns true), convert it to lowercase using ft_char_to_lowercase(str[i]).

```c
while (str[i] != '\0')
{
    n = i - 1;
    if ((i == 0) && ft_char_is_numeric(str[i]))
    {
        str[i] = ft_char_to_uppercase(str[i]);
    }
    else if (!ft_char_is_alpha(str[n]) && !ft_char_is_numeric(str[n]))
    {
        str[i] = ft_char_to_uppercase(str[i]);
    }
    else if (ft_char_is_alpha(str[i]))
    {
        str[i] = ft_char_to_lowercase(str[i]);
    }
    i++;
}
```