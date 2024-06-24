# Chapitre V - Exercice 02: find_sh

## Exercise Description

This exercise involves creating a shell script named `find_sh.sh` that searches the current directory and all its subdirectories for files whose names end with ".sh" (excluding the quotes). The script should output only the filenames without the ".sh" extension.

### Requirements

- **Turn-in directory:** `ex02/`
- **File to turn in:** `find_sh.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `find_sh.sh` using a text editor.**
   
   ```sh
   #!/bin/bash
   find . -type f -name '*.sh' | sed 's/.*\///' | sed 's/\.sh$//'
    ```
Explanation of the Script:
- **find . -type f -name '*.sh'**: Searches for files (-type f) in the current directory and its subdirectories (.) whose names end with ".sh".
- **sed 's/.*\///'**: Removes the directory path from each found file.
- **sed 's/\.sh$//**': Removes the ".sh" extension from the filename.
2. Save the file find_sh.sh in the directory ex02/.
#### Verification
To verify the functionality of find_sh.sh, follow these steps:

1. Navigate to the directory where find_sh.sh is located (ex02/):
```sh
cd ex02/
```
2. Execute the script:
```sh
./find_sh.sh
```
Ensure the output correctly lists the filenames without the ".sh" extension for all files ending with ".sh" in the current directory and its subdirectories.

#### Summary
This exercise demonstrates creating a shell script to search for and list filenames without the ".sh" extension from files ending with ".sh" in a directory structure using basic shell commands (find, sed). By following these steps and implementing find_sh.sh, you will fulfill the exercise requirements effectively.
