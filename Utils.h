/// @file Utils.h
/// @brief Utils Class that hold helper functions.
///
/// This class contains the assertion helper function.
///
/// @author Chan Kok Wai
///
///

#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

/// @brief This class contains the assertion helper method
/// that will be used for testing.
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Utils
{
public:

    ///
    /// @brief Method function
    ///
    /// @details This is a function used for running test.
    ///
    /// @param condition This is where the condition of assertion will be set as
    /// @param passMessage This contains the pass Message
    /// @param failMessage This contains the fail Message
    /// @param ofs This is used for passing in the output stream
    ///
    void Assert(bool condition, string passMessage, string failMessage, ostream &ofs)
    {
        if(condition)
        {
            cout << "[PASS]: " << passMessage << endl;
            ofs << "[PASS]: " << passMessage << endl;

        }
        else
        {
            cout << "[FAIL]: " << failMessage << endl;
            ofs << "[FAIL]: " << failMessage << endl;
        }
    }
};

#endif // UTILS_H_INCLUDED
