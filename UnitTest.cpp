/// @file UnitTest.cpp
/// @brief Unit test file.
///
/// This file is used for testing Unit class.
/// @see Unit.h
///
/// @author Chan Kok Wai
///

#include<iostream>
#include<fstream>

#include "Unit.h"
#include "Utils.h"

using namespace std;

int main()
{
    const string INFILE("Tests/UnitTest.txt");
    Utils utils;
    Unit unitTest;
    Unit paramTest("Data Structure", "ICT290", 2);

    ofstream ofs(INFILE);
    if(!ofs)
    {
        return -1;
    }

    cout << "Unit Test File: \n====Test1: Test on default constructor with initial value to be set as empty string for unit id, unit name, and 0 for credit====" << endl;
    ofs << "Unit Test File: \n====Test1: Test on default constructor with initial value to be set as empty string for unit id, unit name, and 0 for credit====" << endl;

    utils.Assert(
        unitTest.GetUnitName() == "",
        "Unit Name has been set to empty string",
        "Unit Name should be set to empty string", ofs
    );

    utils.Assert(
        unitTest.GetUnitId() == "",
        "Unit ID has been set to empty string",
        "Unit ID should be set to empty string", ofs
    );

    utils.Assert(
        unitTest.GetCredits() == 0,
        "Unit Credits has been set to 0",
        "Unit Credits should be set to 0", ofs
    );

    cout << '\n' << "====Test2: Test on Parameterized constructor with user defined value==== \n";
    ofs << '\n' << "====Test2: Test on Parameterized constructor with user defined value==== \n";

    utils.Assert(
        paramTest.GetUnitName() == "Data Structure",
        "Parameterized Unit Name has been set to Data Structure",
        "Parameterized Unit Name should be set to Data Structure", ofs
    );

    utils.Assert(
        paramTest.GetUnitId() == "ICT290",
        "Parameterized Unit Name has been set to ICT290",
        "Parameterized Unit Name should be set to ICT290", ofs
    );

    utils.Assert(
        paramTest.GetCredits() == 2,
        "Parameterized Unit Credit has been set to 2",
        "Parameterized Unit Credit should be set to 2", ofs
    );

    cout << '\n' << "====Test3: Test on Unit Class Setters in setting user defined values==== \n";
    ofs << '\n' << "====Test3: Test on Unit Class Setters in setting user defined values==== \n";
    string unitName = "Changed unit name";
    string unitId = "Changed unit id";
    unsigned credit = 1;
    cout << "Test Value: --->" << "Unit Name: " << unitName << ", Unit ID: " << unitId << ", Unit Credit: " << credit << endl;
    ofs << "Test Value: --->" << "Unit Name: " << unitName << ", Unit ID: " << unitId << ", Unit Credit: " << credit << endl;

    paramTest.SetUnitName(unitName);
    paramTest.SetUnitId(unitId);
    paramTest.SetCredits(credit);

    utils.Assert(
        paramTest.GetUnitName() == unitName,
        "Unit Name has been set using SetUnitName()",
        "Unit Name has not been set using SetUnitName()", ofs
    );

    utils.Assert(
        paramTest.GetUnitId() == unitId,
        "Unit ID has been set using SetUnitID()",
        "Unit ID has not been set using SetUnitID()", ofs
    );

    utils.Assert(
        paramTest.GetCredits() == credit,
        "Unit Credit has been set using GetCredits()",
        "Unit Credit has not been set using GetCredits()", ofs
    );

    cout << '\n' << "====Test4: Test on output stream of Unit class==== \n";
    cout << "Test Value: --->" << "Unit Name: " << unitName << ", Unit ID: " << unitId << ", Unit Credit: " << credit << endl;
    cout << "Actual cout display:" << endl;
    cout << paramTest;

    ofs << '\n' << "====Test4: Test on output stream of Unit class==== \n";
    ofs << "Test Value: --->" << "Unit Name: " << unitName << ", Unit ID: " << unitId << ", Unit Credit: " << credit << endl;
    ofs << "Actual cout display:" << endl;
    ofs << paramTest;

    ofs.close();

    return 0;
}
