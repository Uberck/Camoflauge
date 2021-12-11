// testApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <io.h>   // For access().
#include <sys/types.h>  // For stat().
#include <sys/stat.h>   // For stat().
#include <string>
using namespace std;


int main()
{
    string strPath = "c:\\dev\\scripts\\sendkeys.ps1";
    //access function:
           //The function returns 0 if the file has the given mode.
           //The function returns –1 if the named file does not exist or does not have the given mode
    if (_access(strPath.c_str(), 0) == 0)
    {

       // system("start powershell.exe Set-ExecutionPolicy RemoteSigned \n");
        system("start notepad.exe \n");
        system("start powershell.exe Set-ExecutionPolicy Bypass -Scope Process -Force; c:\\dev\\scripts\\sendkeys.ps1");
        system("cls");
        //system("pause");
    }
    else
    {
        system("cls");
        cout << "File does not exist";
        system("pause");
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
