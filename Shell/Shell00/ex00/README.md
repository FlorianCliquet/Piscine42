# README

## Chapter III - Exercise 00: Z

### Exercise 00: Z

#### Objective:
The goal of this exercise is to create a file named `z` that outputs the letter "Z" followed by a newline when the file is read using the `cat` command.

#### Requirements:
- **Turn-in directory:** `ex00/`
- **Files to turn in:** `z`
- **Allowed functions:** None

#### Instructions:
1. Create a file named `z`.
2. The content of the file should be such that when you execute the command `cat z` in the terminal, it displays the letter "Z" followed by a newline.

#### Implementation:
To achieve this, you simply need to write the character "Z" followed by a newline character into the file `z`.

#### Steps to create the file:
1. Open your terminal.
2. Navigate to the directory where you want to create the file `z`.
3. Use a text editor to create the file. For example, you can use `nano`, `vim`, or any other editor you prefer. Alternatively, you can use a command to directly create and write to the file.

Here is a simple way to create the file using the `echo` command:
```sh
echo "Z" > z
```
This command writes the letter "Z" followed by a newline to the file z.

#### Verification

To verify that your file is correctly created, use the following command in your terminal:
```sh
cat z
```
The output should be:
```sh
Z
```
By following these steps, you will have a file named z that meets the exercise requirements.

#### Summary:
This exercise is designed to familiarize you with basic file creation and content manipulation in the terminal. The cat command is a simple yet powerful tool to display the contents of a file, and understanding how to control the content of a file is fundamental in many scripting and programming tas