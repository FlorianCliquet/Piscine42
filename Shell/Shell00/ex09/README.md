# README

## Chapter XII - Exercise 09: Illusions, not tricks, Michael...

### Exercise 09

#### Objective:
The objective of this exercise is to create a magic file named `ft_magic` that is properly formatted to detect files identified by the `file` command as type 42. These files must contain the string "42" at the 42nd byte.

#### Requirements:
- **Turn-in directory:** `ex09/`
- **File to turn in:** `ft_magic`
- **Allowed functions:** None

#### Steps to Create File `ft_magic`:

1. **Open a text editor.**
2. **Enter the following content into the text editor:**
```sh
0       string          42              Files identified as type 42
>42     string          42              Contains "42" at 42nd byte
```

Explanation of the Content:
- The file `ft_magic` uses the format understood by the `file` command to identify file types.
- `0 string 42`: Specifies that files identified with the string "42" are type 42 files.
- `>42 string 42`: Specifies that files containing the string "42" at the 42nd byte are also type 42 files.

3. **Save the file as `ft_magic` in the directory `ex09/`.**

#### Verification:
To verify that `ft_magic` works as expected, execute the following command in your terminal:

```sh
file -m ex09/ft_magic <file_to_test>
```
Replace <file_to_test> with the path to a file you want to test against the ft_magic rules. The file command should correctly identify the file as type 42 if it meets the criteria specified in ft_magic.

#### Summary:
This exercise demonstrates creating a ft_magic file formatted to identify files as type 42 based on specific content rules. By following these steps and using the ft_magic file, you can enhance file type detection capabilities using the file command, aligning with the exercise requirements.