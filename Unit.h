/// @file Course.h
/// @brief Object Class for the Course Class.
///
/// This class contains the course
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string.h>

using namespace std;

///
/// Maximum array size of course name supported
///
/// @showinitializer
///
const unsigned UnitNameSize = 10;

/// @brief This class contains the course
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Unit
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the course object and creates a
    ///  course with default  values name as empty string.
    ///
    Unit();

    ///
    /// @brief Parameterized constructor
    ///
    /// @details This initialize the course object and creates a
    /// a course with user defined parameters.
    ///
    /// @param[in] name The name of the course ( first parameter )
    /// @param[in] sect The section of the enrollment mode ( second parameter )
    /// @param[in] cred The number of credit obtained ( third parameter )
    ///
    Unit( const char * nam, char sect, unsigned cred );

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
    /// @brief Procedure
    ///
    /// @details This function sets the sum of credits.
    ///
    /// @see SetCredits(unsigned cred)
    /// @param[in] cred The sum of credit from all courses.
    /// @return Void
    ///
    void SetCredits( unsigned cred );

    ///
    /// @brief Overload output stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This outputs the user defined course format.
    ///
    /// @param[in] os ostream extraction of user defined variable of the course (first parameter).
    /// @param[in] C The course class variable to be used for extraction (second parameter).
    /// @return os The display output format of the course.
    ///
    friend ostream & operator <<( ostream & os, const Unit & U );

    ///
    /// @brief Overload input stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This inputs the user defined course format.
    ///
    /// @param[in] input istream insertion of user defined variable of the course (first parameter).
    /// @param[in] C The course class variable to be used for insertion (second parameter).
    /// @return input The insertion format of the course.
    ///
    friend istream & operator >>( istream & input, Unit & U );

private:
    char name[UnitNameSize];
    char section;
    int  credits;
};


inline unsigned Unit::GetCredits() const
{
    return credits;
}

inline void Unit::SetCredits( unsigned cred )
{
    credits = cred;
}

#endif
