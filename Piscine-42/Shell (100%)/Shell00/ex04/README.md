# README

## Chapter VII - Exercise 04: midLS

### Exercise 04: midLS

#### Objective:
The goal of this exercise is to create a command that lists the files and directories in the current directory, excluding hidden files and the special entries "." and "..". The list should be separated by a comma and a space, sorted by modification date, and directories should be followed by a slash ("/").

#### Requirements:
- **Turn-in directory:** `ex04/`
- **Files to turn in:** `midLS`
- **Allowed functions:** None

#### Solution:
To achieve the desired output, you can use the following command:
```sh
ls -tmp
```
This command lists the files and directories in the current directory, sorted by modification time, appends a slash to directories, and does not list hidden files.

#### Command Explanation:
 - **ls**: List directory contents.
 - **-t**: Sort by modification time, newest first.
 - **-m**: Stream the output as a comma-separated list.
 - **-p**: Append a slash ("/") to directories.

 #### Steps to Create the midLS File:
1. Open your terminal.
2. Navigate to the directory where you want to create the file midLS.
3. Create the midLS file and add the command:
    ```sh
    echo 'ls -tmp' > midLS
    ```
4. Ensure the file is saved.
#### Verification:
To verify that your command works as expected, use the following command in your terminal:

```sh
sh midLS
```
The output should list the files and directories in the current directory, excluding hidden files and special entries ".", "..", separated by a comma and space, sorted by modification date, and directories should be followed by a slash ("/").

#### Summary:
This exercise is designed to enhance your skills in using shell commands to manipulate and format directory listings. By following these steps, you will have created a file named midLS containing the required command, fulfilling the exercise requirements.
