/// @file Main.cpp
/// @brief Entry executor for the Main application.
///
/// This file serves as the entry of this application.
/// It counts the number of courses taken by a student,
/// and calculates the total credits obtained. Main includes
/// course and regist class.
///
/// @see Unit.h
/// @see Regist.h
///
/// @author Chan Kok Wai
///
///

#include <iostream>
#include <fstream>
#include "Unit.h"  // Course class declaration
#include "Registration.h" // Registration class declaration
#include "Vector.h"

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
    ofstream ofile( "routput.txt" );
    if( !infile )
        return -1;

    Registration R;
    Vector<Registration>registVector;
    while(infile.peek() != EOF)
    {
        infile >> R;
        registVector.AppendObject(R);
        //cout << R
        //     << "Number of courses = " << R.GetCount() << '\n'
        //     << "Total credits     = " << R.GetCredits() << '\n';

        //ofile << R
        //     << "Number of courses = " << R.GetCount() << '\n'
        //     << "Total credits     = " << R.GetCredits() << '\n';
    }

    ofile << registVector.GetObjectByIndex(0);

    infile.close();


// Use a debugger and track down the calls made "behind the scene"


    // Declare and initialize a Course, and modify
    // its credits.

    //Unit aUnit( "MTH_3020", "ICT292", 2 );
    //aUnit.SetCredits( 5 );
    //cout << aUnit << endl; // the operator << for Course is called

    return 0;
}

