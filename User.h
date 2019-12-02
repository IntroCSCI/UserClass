#ifndef USER_H
#define USER_H
#include <string>

using std::string;

class User
{
    private:
        string name;
        string handle;
        string bio;

    public:
        void setHandle(string);
        string getHandle();
};

#endif
