/// @file Regist.h
/// @brief Object Class for the Registration Class.
///
/// This class contains the registration
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef REGIST_H
#define REGIST_H

#include <iostream>
#include "Unit.h"

using namespace std;

///
/// Maximum array size of courses supported
///
/// @showinitializer
///
const unsigned MaxUnits = 10;

/// @brief This class contains the registration
/// that includes courses class.
/// This class contains constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @see Course.h
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Registration
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the registration object and creates a
    ///  registration with default values of courses count as 0.
    ///
    Registration();

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the sum of credits from all courses.
    ///
    /// @see GetCredits()
    /// @return The sum of credits from all courses.
    ///
    unsigned GetCredits() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the sum  of count courses.
    ///
    /// @return The sum of count courses.
    ///
    unsigned GetCount() const;


    ///
    /// @brief Overload output stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This outputs the user defined registration format.
    ///
    /// @param[in] os ostream extraction of user defined variable of the registration (first parameter).
    /// @param[in] R The registration class variable to be used for extraction (second parameter).
    /// @return os The display output format of the registration.
    ///
    friend ostream & operator <<( ostream & os, const Registration & R);

    ///
    /// @brief Overload input stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This inputs the user defined registration format.
    ///
    /// @param[in] input istream insertion of user defined variable of the registration (first parameter).
    /// @param[in] R The registration class variable to be used for insertion (second parameter).
    /// @return input The insertion format of the registration.
    ///
    friend istream & operator >>( istream & input, Registration & R );

private:
    long studentId;             // student ID number
    unsigned semester;          // semester year, number
    unsigned count;             // number of courses
    Unit units[MaxUnits]; // array of courses
};

inline unsigned Registration::GetCount() const
{
    return count;
}

#endif

