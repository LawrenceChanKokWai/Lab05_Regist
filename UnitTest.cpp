/// @file UnitTest.cpp
/// @brief Unit test file.
///
/// This file is used for testing Unit class.
/// @see Unit.h
///
/// @author Chan Kok Wai
///

#include<iostream>

#include "Unit.h"

using namespace std;

int main()
{

    Unit unitTest;

    cout << unitTest.GetCredits() << endl;
    cout << unitTest.GetUnitId() << endl;
    cout << unitTest.GetUnitName() << endl;

    unitTest.SetUnitId("ICT282");
    unitTest.SetUnitName("Data_Base");
    unitTest.SetCredits(3);

    cout << unitTest;

    return 0;
}
