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

using namespace std;

int main()
{
    Unit unit;
    unit.SetUnitId("ICT283");
    unit.SetUnitName("Data_Structure_And_Algorithm");
    unit.SetCredits(3);

    Result result;
    result.SetUnit(unit);
    result.SetMarks(85.5);

    Registration registration;
    registration.SetStudentId(39324804);
    registration.SetSemester(3);
    registration.SetResult(result, 0);
    registration.SetCount(1);

    cout << registration;

    return 0;
}
