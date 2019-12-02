#include "User.h"
#include <string>

using std::string;

void User::setHandle(string newHandle)
{
    if( newHandle.length() > 0 )
    {
        handle = newHandle;
    }
}

string User::getHandle()
{
    return handle;
}
