#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

class Utils
{
public:
    void Assert(bool condition, string passMessage, string failMessage)
    {
        if(condition)
        {
            cout << "[PASS]: " << passMessage << endl;
        }
        else
        {
            cout << "[FAIL]: " << failMessage << endl;
        }
    }
};

#endif // UTILS_H_INCLUDED
