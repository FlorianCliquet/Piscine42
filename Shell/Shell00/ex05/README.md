# README

## Chapter VIII - Exercise 05: GiT commit

### Exercise 05: GiT commit?

#### Objective:
The goal of this exercise is to create a shell script that outputs the IDs of the last 5 commits in your git repository.

#### Requirements:
- **Turn-in directory:** `ex05/`
- **Files to turn in:** `git_commit.sh`
- **Allowed functions:** None

#### Instructions:
1. Create a shell script named `git_commit.sh`.
2. The script should output the IDs of the last 5 commits in your git repository.
3. The output should match the format when executed with `bash git_commit.sh | cat -e`:
   ```sh
   baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
   2f52d74b1387fa80eea844969e8dc5483b531ac1$
   905f53d98656771334f53f59bb984fc29774701f$
   5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
   e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
    ```
#### Script Content:
To achieve the desired output, the script will use the git log command with appropriate options to retrieve the last 5 commit IDs and format them correctly.

Here is the content of the git_commit.sh script:
```sh
#!/bin/bash
git log --format="%H" -n 5
```
Explanation:

- **git log --format="%H" -n 5**: This command retrieves the IDs of the last 5 commits.
- **--format="%H"**: Specifies that only the commit hash should be output.
- **-n 5**: Limits the output to the last 5 commits.
#### Steps to Create the git_commit.sh File:
1. Open your terminal.
2. Navigate to the directory where you want to create the file git_commit.sh.
3. Create the git_commit.sh file and add the command:
```sh
echo '#!/bin/bash' > git_commit.sh
echo 'git log --format="%H" -n 5' >> git_commit.sh
```
4. Make the script executable:
```sh
chmod +x git_commit.sh
```
5. Ensure the file is saved.
#### Verification:
To verify that your script works as expected, use the following command in your terminal:

```sh
git_commit.sh | cat -e
```
The output should list the IDs of the last 5 commits in your git repository, each followed by a $ to denote the end of the line.

#### Summary:
This exercise is designed to enhance your skills in scripting and using git commands to retrieve commit information. By following these steps, you will have created a shell script named git_commit.sh that outputs the IDs of the last 5 commits in the correct format, fulfilling the exercise requirements.

