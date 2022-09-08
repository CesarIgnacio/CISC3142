Notes

Task 1: Set up a local development environment.
1.A Terminal
2.Git version control with configurations (.gitignore, git config)
3.GNU G++ (onwindows, use wsl/linux)
4.GNU Make
5.Text editor configuration

Important commands:
    - To start recording in PowerShell
        Start-Transcript -Path "address (ex. "C:\Users\cesar\Desktop\recording01.txt")" -NoClobber
    
    - To stop recording in PoweShell
        Stopt-Transcript
    
    - To create a folder
        md address\name of the folder\ (ex. md C:\Users\cesar\Desktop\video\)
    
    - To open a folder in a new window
        start name or full address of the folder (ex. C:\Users\cesar\Desktop>start video)
    
    - To delete the folder
        rd full address of the folder (ex. rd C:\Users\cesar\Desktop\video\)
    
    - To rename a directory
        ren oldName newName
    
    - To see all the directories and files inside the current directory
        ls
    
    - To copy a file
        copy name_of_the_file address_to_send_the_copy (ex. copy my-video C:\Users\cesar\Desktop>)
            or
        cp name_of_the_file address_to_send_the_copy (ex. copy my-video C:\Users\cesar\Desktop>)
    
    - To copy all the files inside a specific directory
        robocopy directory_name address_to_send_the_copy (ex. robocopy videoteca C:\Users\cesar\Desktop>)

    - To move a file
        mv file_name new_address
    
    - To get G++ version
        C:\MinGW\bin>g++ --version
    
    - To clean screen
        cls
    
    
    
