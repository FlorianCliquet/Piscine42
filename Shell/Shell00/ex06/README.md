# README

## Chapter IX - Exercise 06: gitignore

### Exercise 06: GiT

#### Objective:
The goal of this exercise is to write a shell script that outputs the list of files currently ignored by your git repository but are present in your local repository.

#### Requirements:
- **Turn-in directory:** `ex06/`
- **Files to turn in:** `git_ignore.sh`
- **Allowed functions:** None

#### Instructions:
1. Create a shell script named `git_ignore.sh`.
2. The script should output the list of files currently ignored by your git repository and present in your local repository.
3. The output should match the format when executed with `bash git_ignore.sh | cat -e`:
   ```sh
   .DS_Store$
   mywork.c~$
    ```
#### Script Content:
o achieve the desired output, the script will use the git ls-files command with appropriate options to retrieve the list of ignored files that are present in the local repository and format them correctly.

Here is the content of the git_ignore.sh script:

```sh
#!/bin/bash
git ls-files --others --ignored --exclude-standard
```

ou

```sh
#!/bin/bash
git status -s --ignored=traditional | grep '!!*' | awk '{print $2}'
```
Explanation:
- `git ls-files --others --ignored --exclude-standard: This command lists files that are not tracked by git, are ignored by git, and exclude files that are standard in the working directory.
    - **--others**: Show other (i.e., untracked) files.
    - **--ignored**: Show only ignored files, matching the .gitignore file.
    - **--exclude-standard**: Exclude standard ignored files (e.g., those listed in .gitignore).
#### Steps to Create the git_ignore.sh File:
1. Open your terminal.
2. Navigate to the directory where you want to create the file git_ignore.sh.
3. Create the git_ignore.sh file and add the command:
```
echo '#!/bin/bash' > git_ignore.sh
echo 'git ls-files --others --ignored --exclude-standard' >> git_ignore.sh
```
4. Make the script executable:
```sh
chmod +x git_ignore.sh
```
5. Ensure the file is saved.
#### Verification:
To verify that your script works as expected, use the following command in your terminal:
```sh
git_ignore.sh | cat -e
```
The output should list the ignored files currently present in your local repository, each followed by a $ to denote the end of the line.

#### Summary:
This exercise is designed to enhance your skills in scripting and using git commands to retrieve information about ignored files in a repository. By following these steps, you will have created a shell script named git_ignore.sh that outputs the list of ignored files in the correct format, fulfilling the exercise requirements.