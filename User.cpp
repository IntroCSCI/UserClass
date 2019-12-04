#include "User.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;


bool User::isAlphanumeric(string word)
{
        bool other = false;
        for(int i=0; i<word.size(); i++)
        {
                if( !((word[i] >= 'a' && word[i] <= 'z') ||
                      (word[i] >= 'A' && word[i] <= 'Z') ||
                      (word[i] >= '0' && word[i] <= '9') ))
                {   
                        other = true;
                }
        }
        return other;
}

void User::setHandle(string newHandle)
{
        if( newHandle.length() > 0 )
        {
                handle = newHandle;
        }
}

string User::getHandle()
{
        if( isAlphanumeric(handle) )
        {
                cout<<"Is all letters and numbers\n";
        }
        else
        {
                cout<<"has other characters.\n";
        }
        return handle;
}
