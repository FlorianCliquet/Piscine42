# Chapitre X - Exercice 07: r_dwssap

## Exercise Description

This exercise involves creating a shell script named `r_dwssap.sh` that modifies the output of `cat /etc/passwd`. It removes comments, selects every second line starting from the second, reverses each login, sorts them in reverse alphabetical order, and displays only the logins between FT_LINE1 and FT_LINE2 (inclusive). The logins should be separated by ", " and end with a ".".

### Requirements

- **Turn-in directory:** `ex07/`
- **File to turn in:** `r_dwssap.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `r_dwssap.sh` using a text editor.**
   
   ```sh
   #!/bin/bash

   cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd ', ' - | sed 's/$/./'
    ```
Explanation of the Script:
- **cat /etc/passwd**: Outputs the contents of /etc/passwd.
- **grep -v '#'**: Excludes lines starting with "#" (comments).
- **sed -n 'n;p'**: Selects every second line starting from the second.
- **cut -d ':' -f 1**: Extracts the login (username) field using ":" as the delimiter.
- **rev**: Reverses each login.
- **sort -r**: Sorts the logins in reverse alphabetical order.
- **sed -n "${FT_LINE1},${FT_LINE2}p"**: Selects lines between FT_LINE1 and FT_LINE2 (inclusive).
- **paste -sd ', ' -**: Combines the selected logins with ", " as the separator.
- **sed 's/$/./'**: Appends "." at the end of the output.

2. Save the file r_dwssap.sh in the directory ex07/.

##### Verification
To verify the functionality of r_dwssap.sh, follow these steps:

1. Navigate to the directory where r_dwssap.sh is located (ex07/):
```sh
cd ex07/
```
2. Set the environment variables FT_LINE1 and FT_LINE2 to specify the range (e.g., FT_LINE1=7, FT_LINE2=15).

3. Execute the script:
```sh
./r_dwssap.sh
```
Ensure the output correctly follows the specified format and contains the desired logins sorted and formatted as required.

#### Summary
This exercise demonstrates creating a shell script (r_dwssap.sh) to manipulate the output of cat /etc/passwd to select, reverse, sort, and format logins based on given criteria. By following these steps and implementing r_dwssap.sh, you will fulfill the exercise requirements effectively.

