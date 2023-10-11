/// @file ResultTest.cpp
/// @brief Result test file.
///
/// This file is used for testing for Result class.
/// @see Result.h
///
/// @author Chan Kok Wai
///

#include<iostream>

#include "Result.h"
#include "Utils.h"

using namespace std;

int main()
{
    Utils utils;
    Result testResult;
    const string INFILE("Tests/ResultTest.txt");
    ofstream ofs(INFILE);

    if(!ofs)
    {
        return -1;
    }

    cout << "Result Test File: \n====Test1: Test on default constructor with initial value to be set as 0.0 for marks====" << endl;
    ofs << "Result Test File: \n====Test1: Test on default constructor with initial value to be set as 0.0 for marks====" << endl;

    utils.Assert(
        testResult.GetMarks() == 0.0,
        "Default Constructor been created and marks has been set to 0.0",
        "Default Constructor should be created and marks should be set as 0.0", ofs
    );

    float testMarksValue = 12.3;
    testResult.SetMarks(testMarksValue);
    cout << '\n' << "====Test2: Test on Setting marks: " << testMarksValue << "==== \n";
    ofs << '\n' << "====Test2: Test on Setting marks: " << testMarksValue << "==== \n";

    utils.Assert(
        testResult.GetMarks() == testMarksValue,
        "Marks has been set as 12.3",
        "Marks should be set as 12.3", ofs
    );


    ofs.close();



    return 0;
}
