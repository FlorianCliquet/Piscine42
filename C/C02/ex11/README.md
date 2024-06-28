# ft_putstr_non_printable

## Description

The `ft_putstr_non_printable` function prints a string to the standard output (`stdout`), replacing non-printable characters with their corresponding hexadecimal ASCII representation in the format `\xx`.

## Function Prototype

```c
void ft_putstr_non_printable(char *str);
```

## Parameters
- char *str: A pointer to the string to be printed.

## Return Value
- void: This function does not return any value.

## Usage

Here's an example of how to use the ft_putstr_non_printable function:

```c
#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main()
{
    char str[] = "Hello, \nworld!\t";
    
    printf("Original string: %s\n", str);
    printf("Non-printable characters replaced:\n");
    ft_putstr_non_printable(str);
    
    return 0;
}
```

### Output:
```yaml
Original string: Hello, 
world!	
Non-printable characters replaced:
Hello, \0aorld!\09
```

## Detailed Explanation
The function ft_putstr_non_printable works as follows:

1. **Initialization**: It initializes an integer variable index to 0, which will be used to iterate through each character of the input string str.

2. **Character Checking**: It uses a helper function check to determine if a character is printable. Characters in the ASCII range 32 to 126 are considered printable.
```c
int check(char c)
{
    return (c >= 32 && c <= 126);
}
```

3. **Printing Loop**: It iterates through each character of str:
- If the character is non-printable (i.e., not within the ASCII range 32 to 126), it converts the character to its hexadecimal representation using the ASCII table and prints it in the format \xx where xx are the two hexadecimal digits representing the character.
```c
while (str[index])
{
    if (!check(str[index]))
    {
        hex[0] = '\\';
        hex[1] = "0123456789abcdef"[(unsigned char)str[index] / 16];
        hex[2] = "0123456789abcdef"[(unsigned char)str[index] % 16];
        write(1, hex, 3);
    }
    else
    {
        write(1, &str[index], 1);
    }
    index++;
}
```
4. **Hexadecimal Conversion**: For non-printable characters:
- hex[0] = '\\': Stores the backslash character \.
- hex[1] = "0123456789abcdef"[(unsigned char)str[index] / 16]: Calculates the first hexadecimal digit using integer division.
- hex[2] = "0123456789abcdef"[(unsigned char)str[index] % 16]: Calculates the second hexadecimal digit using modulo operation.
- write(1, hex, 3): Writes the \xx sequence to stdout.

5. **Printing Printable Characters**: For printable characters:
- write(1, &str[index], 1): Writes the character directly to stdout.



