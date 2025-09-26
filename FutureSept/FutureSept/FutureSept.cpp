#include <iostream>

int main()
{
    /*
    USEFUL LINKS
    https://www.youtube.com/watch?v=hwP7WQkmECE&t=9s
    https://www.youtube.com/watch?v=HkdAHXoRtos

    https://www.youtube.com/watch?v=5XgBd6rjuDQ

     
     
     
    
        Command Line

        pwd - print working directory
            will display in terminal the path to where you're currently at in the terminal
    
        cd - change directory
            this will change the path we are in, in the terminal
            we can use true paths
            we can use alias's like the ..
            .. will go up one level of heirarchy 
                So we start in c\users\userName
                cd .. 
                We are now c\users
            c:/windows/users/userName/Pictures - example of a true path
            
            ~/ - alias for user folder

        ls - will list out items in the directory and it has several options
            the only one I use normally is -la
            ls -la

        nano fileName - nano is a text editor baked into most linux based terminals - use this over Vim - if you choose to use Vim
        I can't really help you, it's frustrating to use


        mkdir - make directory

        touch - will make a file 
            touch example.txt

        Git Commands
            git init - will start a local repo for you to start running other git commands
            git add -A - this will add everything to staging

            git commit -m "Message Goes here" - this will commit and prep the project for a push or a save

            git remote NAME LINKGOESHERE - This will create a remote that can point to this link for when we push

            git remote -v will show your remotes/links



            ONE WAY TO SET CREDENTIALS IN GIT (Local)
            git config --global user.email youremail@provider.com

            git config --global user.password yourpassword

            Do not wrap these in quotes

            
            EASIER WAY TO SET CREDENTIALS - Type this line and press enter
            git config --global credential.helper manager-core



            STEPS
            Before we can commit and push we need to 
            git init - this is done once
            git add -A this will be done often
            git commit -m "message" anytime we are at a stopping point we can do a commit
            
            git remote add github link - this is done once and will create a push/pull remote/link

            git remote -v - to confirm links have been made

            git push github master



    
    
    */
}

