# README

## Chapter X - Exercise 07: diff

### Exercise 07

#### Objective:
The goal of this exercise is to recreate file `b` from `a` using a difference file `sw.diff` that specifies the changes.

#### Requirements:
- **Turn-in directory:** `ex07/`
- **Files involved:** `a`, `sw.diff`
- **Allowed functions:** None

#### Instructions:
1. **Understand `a` and `sw.diff`:**
   - `a`: This is the original file.
   - `sw.diff`: This file contains the differences between `a` and the desired file `b`.

2. **Recreate File `b` from `a` and `sw.diff`:**
   - Use the `patch` command to apply the differences from `sw.diff` to `a` and generate `b`.

   Command to recreate `b`:
   ```sh
   patch a -o b < sw.diff
   ```
Explanation:
- **patch** a: Applies the differences specified in sw.diff to a.
- **-o b**: Outputs the patched file as b.
- **< sw.diff**: Specifies sw.diff as the patch file containing differences.

3. Verification:
- After running the command, verify that b has been created or updated in the ex07/ directory.
- Check the content of b to ensure it matches the expected result based on sw.diff.

#### Example Usage:
Assuming you have a and sw.diff files located in the ex07/ directory:
```sh
cd ex07/
patch a -o b < sw.diff
```
This command will apply the changes specified in sw.diff to a and generate b in the ex07/ directory.

#### Summary
This exercise demonstrates how to recreate a file b using differences specified in sw.diff relative to an original file a. By following these steps and using the patch command, you can efficiently manage and apply changes between versions of text files, which is a fundamental skill in version control and file management.

