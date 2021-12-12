// testApp.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <io.h>   // For access().
#include <string>
using namespace std;


int main()
{
    string strPath = "c:\\bin\\helper.ps1";
    //access function:
           //The function returns 0 if the file has the given mode.
           //The function returns –1 if the named file does not exist or does not have the given mode
    if (_access(strPath.c_str(), 0) == 0)
    {

       // system("start powershell.exe Set-ExecutionPolicy RemoteSigned \n");
        system("start notepad.exe \n");
        system("start powershell.exe Set-ExecutionPolicy Bypass -Scope Process -Force; c:\\bin\\helper.ps1");
        system("cls");
        //system("pause"); // Pause for debugging
    }
    else
    {
        system("cls");
        cout << "Cannot find script, is the .ps1 file in the 'bin' folder in c: drive? \n";
        cout << "\n";
        system("pause");
    }
}