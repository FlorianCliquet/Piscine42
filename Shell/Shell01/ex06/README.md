# Chapitre IX - Exercice 06: Skip

## Exercise Description

This exercise involves creating a shell script named `skip.sh` that displays every second line of the `ls -l` output starting from the first line.

### Requirements

- **Turn-in directory:** `ex06/`
- **File to turn in:** `skip.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `skip.sh` using a text editor.**
   
   ```sh
   #!/bin/bash
   ls -l | sed -n '1~2p'
    ```
Explanation of the Script:
- **ls -l**: Lists files and directories with detailed information.
- **sed -n '1~2p**': Prints every second line starting from the first line (1~2p).
2. Save the file skip.sh in the directory ex06/.

#### Verification
To verify the functionality of skip.sh, follow these steps:

1. Navigate to the directory where skip.sh is located (ex06/):
```sh
cd ex06/
```
2. Execute the script
```sh
./skip.sh
```
Ensure the output correctly displays every second line of the ls -l command starting from the first line.

#### Summary
This exercise demonstrates creating a shell script to selectively display lines from the ls -l command using sed for filtering based on line numbers. By following these steps and implementing skip.sh, you will fulfill the exercise requirements effectively.