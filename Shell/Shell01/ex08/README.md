# Chapitre XI - Exercice 08: add_chelou

## Exercise Description

This exercise involves creating a shell script named `add_chelou.sh` that performs addition of two numbers represented in unconventional bases. `FT_NBR1` is in base `'\"?!` and `FT_NBR2` is in base `mrdoc`. The script should output the sum of these two numbers in base `gtaio luSnemf`.

### Requirements

- **Turn-in directory:** `ex08/`
- **File to turn in:** `add_chelou.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `add_chelou.sh` using a text editor.**
   
   ```bash
   #!/bin/bash

   FT_NBR1=$FT_NBR1
   FT_NBR2=$FT_NBR2

   echo "ibase=5; obase=23; $FT_NBR1 + $FT_NBR2" | bc | tr '0123456789ABC' 'gtaio luSnemf'
    ```
Explanation of the Script:
- **echo "ibase=5; obase=23; $FT_NBR1 + $FT_NBR2" | bc**: Uses bc (basic calculator) to convert FT_NBR1 and FT_NBR2 from their respective bases and compute their sum in base 10.
- **tr '0123456789ABC' 'gtaio luSnemf'**: Translates the result from base 10 to base gtaio luSnemf.
2. Save the file add_chelou.sh in the directory ex08/.

#### Verification
To verify the functionality of add_chelou.sh, you can test it with different values for FT_NBR1 and FT_NBR2:

1. Navigate to the directory where add_chelou.sh is located (ex08/):
```sh
cd ex08/
```
2. Execute the script:
```sh
./add_chelou.sh
```
Ensure the output correctly calculates and converts the sum of FT_NBR1 and FT_NBR2 into base gtaio luSnemf.

#### Summary
This exercise demonstrates creating a shell script (add_chelou.sh) to perform addition of numbers represented in unconventional bases and converting the result to another base. By following these steps and implementing add_chelou.sh, you will fulfill the exercise requirements effectively.