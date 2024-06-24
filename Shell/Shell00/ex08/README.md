# README

## Chapter XI - Exercise 08: clean

### Exercise 08

#### Objective:
The goal of this exercise is to create a command in a file named `clean` that searches for and deletes files in the current directory and its subdirectories based on specific naming patterns.

#### Requirements:
- **Turn-in directory:** `ex08/`
- **File to turn in:** `clean`
- **Allowed functions:** None

#### Instructions:
1. **Create File `clean`:**
   - Create a file named `clean` that contains a single command line.
   - This command line should search for files in the current directory and its subdirectories:
     - Files whose names end with `~`.
     - Files whose names start and end with `#`.

2. **Functionality:**
   - The command should display the files found that match the criteria.
   - It should then delete these files.

3. **Single Command Requirement:**
   - Use a single command line within the `clean` file. Do not use `;`, `&&`, or other constructs to chain commands.

#### Content of File `clean`:
Create a file named `clean` with the following command line:

```sh
find . \( -name "*~" -o -name "#*#" \) -print -delete
```
### Explanation of the Command:

The command in the `clean` file uses the `find` utility to perform the following operations:

- **`find .`:** Initiates the search from the current directory (`.`).
- **`\(...\)**:** Groups the search criteria.
- **`-name "*~"`:** Matches files ending with `~`.
- **`-o`:** OR operator.
- **`-name "#*#"`:** Matches files starting and ending with `#`.
- **`-print`:** Prints the path of each file found.
- **`-delete`:** Deletes each file that matches the search criteria.

#### Steps to Create File `clean`:

1. **Open a text editor.**
2. **Enter the command line provided below into the text editor:**
3. Save the file as clean in the directory ex08/.
#### Verification:
To verify that clean works as expected, execute the following command in your terminal:
```sh
sh clean
```
Ensure you are in the ex08/ directory when running this command. It should display the files that match the specified criteria (*~ or #*#) and delete them.

#### Summary:
This exercise demonstrates using the find command to efficiently locate and remove files with specific naming patterns (*~ and #*#) across directories. By following these steps and using the clean file, you will effectively manage and clean unwanted files based on defined criteria, meeting the exercise requirements.

