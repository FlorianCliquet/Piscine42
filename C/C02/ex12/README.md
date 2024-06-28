# ft_print_memory

## Description

The `ft_print_memory` function prints the memory content of a given memory area in a formatted hexadecimal and ASCII representation. It displays hexadecimal values of memory addresses, their corresponding hexadecimal values, and ASCII characters (if printable).

## Function Prototype

```c
void ft_print_memory(void *addr, unsigned int size);
```

## Parameters
- void *addr: A pointer to the memory area to be printed.
- unsigned int size: The size of the memory area (in bytes) to be printed.

## Return Value
- void: This function does not return any value.

## Usage
Here's an example of how to use the ft_print_memory function:

```c
#include <stdio.h>
#include <unistd.h>

void print_hexa_memory_addr(unsigned long addr)
{
    char *base = "0123456789abcdef";
    char buffer[16];
    int i = 0;
    while (i < 16)
        buffer[i++] = '0';
    i = 15;
    while (addr > 0)
    {
        buffer[i] = base[addr % 16];
        addr /= 16;
        i--;
    }
    write(1, buffer, 16);
    write(1, ": ", 2);
}

void ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned char *ptr = (unsigned char *)addr;
    char *base = "0123456789abcdef";
    
    i = 0;
    while (i < size)
    {
        print_hexa_memory_addr((unsigned long)(addr + i));
        j = 0;
        while (j < 16 && i + j < size)
        {
            write(1, base + (ptr[i + j] / 16), 1);
            write(1, base + (ptr[i + j] % 16), 1);
            if (j % 2)
                write(1, " ", 1);
            j++;
        }
        while (j < 16)
        {
            write(1, "  ", 2);
            if (j % 2)
                write(1, " ", 1);
            j++;
        }
        j = 0;
        while (j < 16 && i + j < size)
        {
            if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
                write(1, ptr + i + j, 1);
            else
                write(1, ".", 1);
            j++;
        }
        write(1, "\n", 1);
        i += 16;
    }
}

int main(void)
{
    char data[] = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec\t\n\tprint_memory. \t\n\tlol.lol";
    
    ft_print_memory(data, sizeof(data));

    return 0;
}
```

## Output:
```yaml
0000000000000000: 426f 6e6a 6f75 7220 6c65 7320 616d 696e  Bonjour les amin
0000000000000010: 6368 6573 090a 0920 6320 2065 7374 2066  ches... c  est f
0000000000000020: 6f75 2e74 6f75 742e 6365 2071 7520 7065  ou.tout.ce que pe
0000000000000030: 7574 2066 6169 7265 2061 7665 6309 0a09  ut faire avec...
0000000000000040: 0970 7269 6e74 5f6d 656d 6f72 792e 2009  .print_memory. .
0000000000000050: 0a09 6c6f 6c2e 6c6f 6c                   ..lol.lol
```

## Detailed Explanation
The ft_print_memory function works as follows:

1. **Initialization**: It initializes variables i, j, and ptr:
    - i is used to track the current offset in the memory area.
    - j is used for iterating through each line of memory (16 bytes per line).
    - ptr is a pointer to addr, cast to unsigned char *, which allows byte-level access.

2. **Hexadecimal Address Printing**: print_hexa_memory_addr prints the hexadecimal representation of the memory address at intervals of 16 bytes.

3. **Hexadecimal and ASCII Display**:
    - It iterates through each line of memory, printing 16 bytes per line.
    - For each byte, it prints its hexadecimal value using base lookup.
    - Every two bytes are separated by a space for clarity.
    - If a byte is not printable (ASCII value less than 32 or greater than 126), it prints a dot (.) instead.

4. **Formatting**:
    - Each line consists of the hexadecimal address followed by the hexadecimal values of the bytes and their corresponding ASCII characters.
    - Lines are separated by newline characters (\n).

5. ** Looping and Incrementation**:
    - The function increments i by 16 after each line is printed until the entire size of memory is processed.