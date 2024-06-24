# README

## Chapter V - Exercise 02: Oh yeah, mooore...

### Exercise 02: Oh yeah, mooore...

#### Objective:
The goal of this exercise is to create specific files and directories with particular attributes and permissions, and then archive them into a tar file named `exo2.tar`.

#### Requirements:
- **Turn-in directory:** `ex02/`
- **Files to turn in:** `exo2.tar`
- **Allowed functions:** None

#### Instructions:
1. Create the necessary files and directories to match the specified `ls -l` output.
2. Ensure each file and directory has the specified permissions and attributes.
3. Create a symbolic link as specified.
4. Archive all files and directories into a tar file named `exo2.tar`.

#### File and Directory Creation:
1. **Create directory `test0`**:
   ```sh
   mkdir test0
   chmod 715 test0
    ```
2. Create file test1:
```sh
echo "1234" > test1
chmod 711 test1
```
3. Create directory test2:
```sh
mkdir test2
chmod 504 test2
```
4. Create file test3:
```sh
echo "1" > test3
chmod 444 test3
```
5. Create file test4:
```sh
echo "12" > test4
chmod 641 test4
```
6. Create file test5:
```sh
ln test3 test5
```
7. Create symbolic link test6:
```sh
ln -s test0 test6
```
#### Verification:
To verify that your files and directories are correctly created, use the following command in your terminal:
```sh
ls -l
```
The output should be:
```sh
total XX
drwx--xr-x 2 <user> <group> XX Jun 1 20:47 test0
-rwx--xr-- 1 <user> <group> 4 Jun 1 21:46 test1
dr-x---r-- 2 <user> <group> XX Jun 1 22:45 test2
-r-----r-- 2 <user> <group> 1 Jun 1 23:44 test3
-rw-r----x 1 <user> <group> 2 Jun 1 23:43 test4
-r-----r-- 2 <user> <group> 1 Jun 1 23:44 test5
lrwxrwxrwx 1 <user> <group> 5 Jun 1 22:20 test6 -> test0
```
#### Summary:
This exercise is designed to help you understand how to create and manage files, directories, and symbolic links with specific permissions in a Unix-like environment. It also covers the creation of tar archives, which is useful for file distribution and backups.
