
#include<iostream>

#include "Date.h"
#include "Utils.h"

using namespace std;

int main()
{
    Utils utils;
    Date date(21, 7, 2020);

    utils.Assert(
        date.GetDay() == 21,
        "Date has been set as 21",
        "Date should be set as 21"
    );

    utils.Assert(
        date.GetMonth() == 7,
        "Date has been set as 7",
        "Date should be set as 7"
    );

    utils.Assert(
        date.GetYear() == 2020,
        "Date has been set as 2020",
        "Date should be set as 2020"
    );

    return 0;
}
