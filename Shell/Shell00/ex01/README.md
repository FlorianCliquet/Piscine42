# README

## Chapter IV - Exercise 01: testShell00

### Exercise 01: testShell00

#### Objective:
The goal of this exercise is to create a file named `testShell00` with specific attributes and permissions, and then archive it into a tar file named `testShell00.tar`.

#### Requirements:
- **Turn-in directory:** `ex01/`
- **Files to turn in:** `testShell00.tar`
- **Allowed functions:** None

#### Instructions:
1. Create the file `testShell00` in your working directory.
2. Ensure the file has the following permissions and attributes when listed with `ls -l`:
   ```sh
   -r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
```
Note: The "XX" values for user and group ID are placeholders and will not be considered.
```
#### Steps to create the file and set permissions:
1. Create the file:
```sh
touch testShell00
```
2. Add 40 bytes into the file:
```sh
truncate -s 40 testShell00
```
3. Set the file permissions:
```sh
chmod 555 testShell00
chmod u+w testShell00
chmod u+r-wx,-g+rx-w,o+rx-w testShell00
```
On peut se permettre d'écrit chmod 555 car c'est l'écriture en octal
```
0 : - - - (aucun droit)
1 : - - x (exécution)
2 : - w - (écriture)
3 : - w x (écriture et exécution)
4 : r - - (lecture seule)
5 : r - x (lecture et exécution)
6 : r w - (lecture et écriture)
7 : r w x (lecture, écriture et exécution)
```
This sets the permissions to -r--r-xr-x:

Read for the owner, group, and others (r--r-xr-x).
Execute for the group and others (r--r-xr-x).
Write for the owner to allow file content creation (chmod u+w).
4. Verify the file permissions:
```sh
ls -l testShell00
```
The output should be:
```sh
-r--r-xr-x 1 <user> <group> 40 Jun 1 23:42 testShell00
```
5. Create the tar file:
```sh
tar -cf testShell00.tar testShell00
```
#### Verification:
To check the contents of the tar file:
```sh
tar -tf testShell00.tar
```
The output should include:
```sh
testShell00
```
By following these steps, you will have a file named testShell00 with the required attributes and an archive named testShell00.tar that meets the exercise requirements.
#### Summary:
This exercise is designed to familiarize you with setting file permissions and creating tar archives in a Unix-like environment. Understanding file permissions is essential for managing security and access control, while creating tar archives is useful for file distribution and backups.