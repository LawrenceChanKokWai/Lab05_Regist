/// @file RegistrationTest.cpp
/// @brief Registration test file.
///
/// This file is used for testing Registration class.
/// @see Registration.h
///
/// @author Chan Kok Wai
///

#include<iostream>

#include "Registration.h"
#include "Utils.h"

using namespace std;

int main()
{
    Utils utils;
    Registration testRegist;
    Student testStudent;
    const string INFILE("Tests/RegistrationTest.txt");
    ofstream ofs(INFILE);
    if(!ofs)
    {
        return -1;
    }

    cout << "Registration Test File: \n====Test1: Test on default constructor with initial value to be set as 0 for count====" << endl;
    ofs << "Registration Test File: \n====Test1: Test on default constructor with initial value to be set as 0 for count====" << endl;

    utils.Assert(
        testRegist.GetSemester() == 0,
        "Default Constructor created with semester set to 0",
        "Default Constructor Should be created and semester to be set to 0", ofs
    );

    utils.Assert(
        testRegist.GetCount() == 0,
        "Default Constructor created with count set to 0",
        "Default Constructor Should be created and count to be set to 0", ofs
    );

    unsigned testSemesterValue(3);
    testRegist.SetSemester(testSemesterValue);
    cout << '\n' << "====Test2: Test on Setting Semester: " << testSemesterValue << "==== \n";
    ofs << '\n' << "====Test2: Test on Setting Semester: " << testSemesterValue << "==== \n";
    utils.Assert(
        testRegist.GetSemester() == testSemesterValue,
        "Semester successfully been set to 3",
        "Semester should be set to 3", ofs
    );

    unsigned testCountValue(3);
    testRegist.SetCount(testCountValue);
    cout << '\n' << "====Test3: Test on Setting Count: " << testCountValue << "==== \n";
    ofs << '\n' << "====Test3: Test on Setting Count: " << testCountValue << "==== \n";
    utils.Assert(
        testRegist.GetSemester() == testCountValue,
        "Count successfully been set to 3",
        "Count should be set to 3", ofs
    );


    ofs.close();

    return 0;
}
