/// @file Course.cpp
/// @brief Course implementation file.
///
/// This file holds all implementation from Course header file.
/// @see Course.h
///
/// @author Chan Kok Wai
///
//----------------------------------------

//----------------------------------------
// Includes
#include "course.h"

//----------------------------------------
// Global variables/defines

//----------------------------------------
// Prototypes

//----------------------------------------
// Function implementations

// Default constructor for Course
Course::Course()
{
  name[0] = '\0'; // it is a char * string, not a C++ string object.
}

// Overloaded constructor for Course
Course::Course( const char * nam, char sect,
                unsigned cred )
{
  strncpy( name, nam, CourseNameSize );
  section = sect;
  credits = cred;
}

istream & operator >>( istream & input, Course & C )
{
  input >> C.name >> C.section >> C.credits;
  return input;
}

ostream & operator <<( ostream & os, const Course & C )
{
  os << "  Course:  " << C.name << '\n'
     << "  Section: " << C.section << '\n'
     << "  Credits: " << C.credits << '\n';
  return os;
}
