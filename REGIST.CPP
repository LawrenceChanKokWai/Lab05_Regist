/// @file Regist.cpp
/// @brief Registration implementation file.
///
/// This file holds all implementation from Registration header file.
/// @see Regist.h
///
/// @author Chan Kok Wai
///
//----------------------------------------

//----------------------------------------
// Includes
#include "regist.h"

//----------------------------------------
// Global variables/defines

//----------------------------------------
// Prototypes

//----------------------------------------
// Function implementations

// Default constructor for Registration
Registration::Registration()
{
  count = 0;
}

// Get registered course credits
unsigned Registration::GetCredits() const
{
  unsigned sum = 0;
  for(unsigned i = 0; i < count; i++)
    sum += courses[i].GetCredits();

  return sum;
}

istream & operator >>( istream & input, Registration & R )
{
  input >> R.studentId >> R.semester >> R.count;

  for(unsigned i = 0; i < R.count; i++)
    input >> R.courses[i];  // track down which >> operator is called. Hint: look at what is being input.

  return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
  os << "Student ID: " << R.studentId << '\n'
     << "Semester:   " << R.semester << '\n';

  for(unsigned i = 0; i < R.count; i++)
    os << R.courses[i] << '\n';

  return os;
}
