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
#include "Unit.h"

//----------------------------------------
// Global variables/defines

//----------------------------------------
// Prototypes

//----------------------------------------
// Function implementations

// Default constructor for Course
Unit::Unit()
{
  name[0] = '\0'; // it is a char * string, not a C++ string object.
}

// Overloaded constructor for Course
Unit::Unit( const char * nam, char sect,
                unsigned cred )
{
  strncpy( name, nam, UnitNameSize );
  section = sect;
  credits = cred;
}

istream & operator >>( istream & input, Unit & U )
{
  input >> U.name >> U.section >> U.credits;
  return input;
}

ostream & operator <<( ostream & os, const Unit & U )
{
  os << "  Unit:  " << U.name << '\n'
     << "  Section: " << U.section << '\n'
     << "  Credits: " << U.credits << '\n';
  return os;
}
