/// @file Main.cpp
/// @brief Entry executor for the Main application.
///
/// This file serves as the entry of this application.
/// It counts the number of courses taken by a student,
/// and calculates the total credits obtained. Main includes
/// course and regist class.
///
/// @see Course.h
/// @see Regist.h
///
/// @author Chan Kok Wai
///
///

#include <iostream>
#include <fstream>
#include "course.h"  // Course class declaration
#include "regist.h"  // Registration class declaration

using namespace std;

///
/// @brief Main program (entry execution)
///
/// @details This file executes by opening an input file stream,
/// reads a Registration object which includes it's list of courses.
/// It will then re-display all information, calculates the total credits taken,
/// and output stream it writing the results to a file stream.
///
int main()
{
  ifstream infile( "rinput.txt" );
  if( !infile ) return -1;

  Registration R;
  infile >> R;

  ofstream ofile( "routput.txt" );

// Use a debugger and track down the calls made "behind the scene"
  ofile << R
    << "Number of courses = " << R.GetCount() << '\n'
    << "Total credits     = " << R.GetCredits() << '\n';

  // Declare and initialize a Course, and modify
  // its credits.

  Course aCourse( "MTH_3020", 'B', 2 );
  aCourse.SetCredits( 5 );
  cout << aCourse << endl; // the operator << for Course is called

  return 0;
}

