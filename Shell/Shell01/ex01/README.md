# Chapitre IV - Exercice 01: print_groups

## Exercise Description

This exercise involves creating a shell script named `print_groups.sh` that retrieves and displays the list of groups to which a user belongs, specified by their username stored in the environment variable FT_USER. The groups should be output as a comma-separated list without spaces.

### Requirements

- **Turn-in directory:** `ex01/`
- **File to turn in:** `print_groups.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `print_groups.sh` using a text editor.**
   
   ```sh
   #!/bin/bash
   id -nG $FT_USER | tr '\n' ',' | sed 's/,$//'
    ```

Explanation of the Script:
- **id -nG $FT_USER**: Prints all group IDs that the specified user belongs to.
- **tr '\n' ','**: Translates newline characters to commas.
- **sed 's/,$//**': Removes the trailing comma from the output.

2. Save the file print_groups.sh in the directory ex01/.

#### Verification
To verify the functionality of print_groups.sh, follow these steps:
1. Set the FT_USER environment variable to the desired username:
```sh
export FT_USER=nours
```
2. Execute the script:
```sh
./print_groups.sh
```
Ensure the output correctly displays the comma-separated list of groups to which the user belongs.

#### Summary
This exercise demonstrates creating a shell script to retrieve and format group information for a specified user using basic shell commands (id, tr, sed). By following these steps and implementing print_groups.sh, you will meet the exercise requirements effectively.

