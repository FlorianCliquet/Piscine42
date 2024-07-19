# Chapitre VIII - Exercice 05: Can you create it ?

## Exercise Description

In this exercise, you will create a file containing only the text "42" and nothing else. The filename must be exactly "\?$*'MaRViN'*$?".

### Requirements

- **Turn-in directory:** `ex05/`
- **File to turn in:** `"\?$*'MaRViN'*$?"`
- **Allowed functions:** None

### Instructions

1. **Create a new file with the specified content and filename using a text editor.**
   
   ```sh
   echo "42" > "\?$*'MaRViN'*$?"
    ```
Explanation of the Command:
- **echo "42" > "\?$*'MaRViN'*$?"**: Writes the text "42" into a file named "?$'MaRViN'$?".
2. Save the file with the exact filename "?$'MaRViN'$?" in the directory ex05/.
#### Verification
To verify the creation of the file and its content, follow these steps:

1. Navigate to the directory where the file "?$'MaRViN'$?" is located (ex05/):
```sh
cd ex05/
```
2. List the files to ensure the file "?$'MaRViN'$?" exists and check its contents:
```sh
ls -l "\?$*'MaRViN'*$?"
cat "\?$*'MaRViN'*$?"
```
Ensure that the output confirms the existence of the file and displays "42".
#### Summary
This exercise demonstrates creating a file named "?$'MaRViN'$?" with the content "42" using basic shell commands (echo). By following these steps and implementing the command provided, you will fulfill the exercise requirements effectively.

