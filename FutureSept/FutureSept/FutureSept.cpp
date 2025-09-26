#include <iostream>
#include <string>
#include <fstream> // lets us read nad write to a file
#include <filesystem>
#include "Example.h"



// Method to open file and return if it's good
bool FileExists(std::string name)
{
    std::ifstream file(name);
    return file.good();

}

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

    std::string readLine = "";
    // File I/O - reading from and writing to a file
   

    // We need to open the file - not actually but with code
    std::ifstream MyReadFile("readme.txt"); // this line assumes that the readme.txt is in the same folder as FutureSept.cpp
    // So we would need to do one of three things
    // 1) Provide the true path to the file -this is the absolute
    // 2) Provide the relative to the file - This is semi difficult, you just need the knowledge of traversing directories like we did in terminal
    // 3) Move the file - this is the easiest and will always work
    
    // Do whatever we're doing
    while (std::getline(MyReadFile, readLine))
    {
        std::cout << readLine << std::endl;
    }
    // Then we need to close the file
    MyReadFile.close();



    // Writing to a file

    // Open File
    std::ofstream MyFile("readme.txt");

    // Do whatever we're doing
    MyFile << "Files can be tricky" << std::endl;;


    // Close the file
    MyFile.close();


    // Create a file
    std::ofstream SecondFile("second.txt", std::ios::app);

    SecondFile << "Did it create" << std::endl;

    SecondFile.close();


    // Append to second file
    SecondFile.open("second.txt", std::ios::app);

    SecondFile << "Whatever\n";

    SecondFile << "Other line";

    SecondFile.close();

    //SecondFile.open("second.txt");
    //SecondFile << "testing";
    //SecondFile.close();

    //SecondFile.open("second.txt", std::ios_base::app);
    //SecondFile << "\n New Line";
    //SecondFile << "\n Other Line";
    //SecondFile.close();


    Example first; // call default constructor



    Example newExample("Bob"); // calling the overload constructor


    std::string nameVar = "Karl";

    Example newPerson(nameVar); // call overloaded constructor and pass in the nameVar

    std::cout << first.GetName() << std::endl;

    std::cout << newExample.GetName() << std::endl;

    std::cout << newPerson.GetName() << std::endl;


    if (FileExists("third.txt"))
    {
        // file is good do stuff
    }
    else
    {
        // file does not exist
        std::cout << "File does not exist" << std::endl;
        std::ofstream third("third.txt");
    }





}

