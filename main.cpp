#include <iostream>
#include <string>
#include "User.h"

using namespace std;

int main()
{
    User account;

    account.setHandle("CSCI111");
    cout<< account.getHandle() << endl;
    account.setHandle("CSCI-111");
    cout<< "New handle is: "<< account.getHandle() <<endl;


    return 0;
}

