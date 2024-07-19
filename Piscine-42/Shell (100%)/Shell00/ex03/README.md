# README

## Chapter VI - Exercise 03: Connecte-moi!

### Exercise 03: Connecte-moi!

#### Objective:
The goal of this exercise is to create your own SSH keys and add your public key to the turn-in directory in a file named `id_rsa_pub`. Additionally, you need to update your SSH public key on the intra to authorize yourself to upload projects to the server.

#### Requirements:
- **Turn-in directory:** `ex03/`
- **Files to turn in:** `id_rsa_pub`
- **Allowed functions:** None

#### Instructions:
1. **Generate SSH keys:**
   - Use the following command to generate a new SSH key pair:
     ```sh
     ssh-keygen -t rsa -b 4096 -f ~/.ssh/id_rsa
     ```
   - Follow the prompts to set a passphrase if desired. If you don't want to set a passphrase, just press Enter when prompted.

2. **Add your SSH public key to the turn-in directory:**
   - Copy the contents of your public key (`~/.ssh/id_rsa.pub`) to a file named `id_rsa_pub`:
     ```sh
     cp ~/.ssh/id_rsa.pub ./ex03/id_rsa_pub
     ```

3. **Update your SSH public key on the intra:**
   - Log in to your intra account.
   - Navigate to the SSH keys section.
   - Add the contents of your `~/.ssh/id_rsa.pub` file to your intra account to authorize yourself to upload projects to the server.

#### Verification:
To verify that your SSH keys are correctly generated and your public key is correctly copied, use the following commands:
1. Check the contents of the `id_rsa_pub` file:
   ```sh
   cat ./ex03/id_rsa_pub
    ```
The output should match the contents of your ~/.ssh/id_rsa.pub file.
2. Ensure you can see your new SSH key on the intra by logging into your intra account and checking the SSH keys section.

#### Summary:
This exercise is designed to familiarize you with creating SSH keys and using them to authenticate with a remote server. SSH keys are a secure way to log into a server without using a password and are commonly used for secure communications and file transfers.

By following these steps, you will have generated your own SSH keys, added your public key to the turn-in directory, and updated your SSH key on the intra, fulfilling the exercise requirements.