# Chapitre VI - Exercice 03: count_files

## Exercise Description

In this exercise, you will create a shell script named `count_files.sh` that counts and displays the number of regular files and directories in the current directory and all its subdirectories, including the starting "." directory.

### Requirements

- **Turn-in directory:** `ex03/`
- **File to turn in:** `count_files.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `count_files.sh` using a text editor.**
   
   ```sh
   #!/bin/bash
   find . -type f -o -type d | wc -l
    ```
Explanation of the Script:

- **find . -type f -o -type d**: Searches for regular files (-type f) or directories (-type d) in the current directory (.) and its subdirectories.
- **wc -l**: Counts the number of lines returned by the find command, which corresponds to the total number of files and directories.
2. Save the file count_files.sh in the directory ex03/.
#### Verification
To verify the functionality of count_files.sh, follow these steps:

1. Navigate to the directory where count_files.sh is located (ex03/):
```sh
cd ex03/
```
2. Execute the script:
```
./count_files.sh
```
Ensure the output correctly displays the total count of regular files and directories in the current directory and its subdirectories.

#### Summary
This exercise demonstrates creating a shell script to count and display the number of regular files and directories in a directory structure using basic shell commands (find, wc). By following these steps and implementing count_files.sh, you will fulfill the exercise requirements effectively.
