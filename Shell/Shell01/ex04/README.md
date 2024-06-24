# Chapitre VII - Exercice 04: MAC

## Exercise Description

This exercise involves creating a shell script named `MAC.sh` that retrieves and displays the MAC (Media Access Control) addresses of your machine. Each MAC address should be printed on a new line.

### Requirements

- **Turn-in directory:** `ex04/`
- **File to turn in:** `MAC.sh`
- **Allowed functions:** None

### Instructions

1. **Create a new file named `MAC.sh` using a text editor.**
   
   ```sh
   #!/bin/bash
   ifconfig | grep ether | awk '{print $2}'
    ```
Explanation of the Script:

- **ifconfig**: Retrieves network interface configuration information.
- **grep ether**: Filters lines containing the keyword "ether", which precedes MAC addresses in ifconfig output.
- **awk '{print $2}'**: Extracts and prints the second column of each line, which contains the MAC address.
2. Save the file MAC.sh in the directory ex04/.
#### Verification
To verify the functionality of MAC.sh, follow these steps:
1. Navigate to the directory where MAC.sh is located (ex04/):
```sh
cd ex04/
```
2. Execute the script:
```sh
./MAC.sh
```
Ensure the output correctly displays the MAC addresses of your machine, each on a new line.
#### Summary
This exercise demonstrates creating a shell script to extract and display MAC addresses from your machine's network interfaces using basic shell commands (ifconfig, grep, awk). By following these steps and implementing MAC.sh, you will fulfill the exercise requirements effectively.
