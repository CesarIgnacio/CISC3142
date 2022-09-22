- **Cloning a Repository using SSH in Git**<br>
(locate yourself on the directory where you want to store the clone)
  1. eval "$(ssh-agent -s)"
  2. ssh-add ~/.ssh/id_rsa
  3. git clone [SSH link]

- **To check for new changes**
  - git status
    
- **To add the new changes**
  - git add [file 1] [file 2] etc.
  - git add -A (to add all the changes)
    
- **To commint changes**
  - git commit -m "[explanatory message]"
    
- **To send the changes (ask)**
  - git push
  - git push [origin (nickname of the URL to push to)] [branch (ex.: main)]

- **To get changes from the server (ask)**
  - git pull
       
- **Create a new "local" repository**
  - git init [name]
    
- **Link directory with GitHub repository**
  - git remote [origin (nickname for the URL)] <URL>

- **View your commits**
  - git log
        
- **Shows all git options/commands**
  - git config --global

- **Check version**
  - git --version
