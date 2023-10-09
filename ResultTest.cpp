#include<iostream>

#include "Result.h"

using namespace std;

int main()
{

    Unit testUnit;

    testUnit.SetUnitId("ICT282");
    testUnit.SetUnitName("Data_Structure");
    testUnit.SetCredits(3);

    Result testResult(testUnit, 89);

    cout << testResult;



    return 0;
}
