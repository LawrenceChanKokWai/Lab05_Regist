
#include<iostream>
#include<fstream>

#include "Date.h"
#include "Utils.h"

using namespace std;

int main()
{
    const string INFILE("Tests/DateTest.txt");
    Utils utils;
    Date date;
    ofstream ofs(INFILE);
    Date paramDate(21,7,2020);

    if(!ofs)
    {
        return -1;
    }

    cout << "Date Test File: \n====Test1: Test on default constructor with initial value to be set as 0====" << endl;
    ofs << "Date Test File: \n====Test1: Test on default constructor with initial value to be set as 0====" << endl;

    utils.Assert(
        date.GetDay() == 0,
        "Date has been set as 0",
        "Date should be set as 0",
        ofs
    );

    utils.Assert(
        date.GetMonth() == 0,
        "Date has been set as 0",
        "Date should be set as 0",
        ofs
    );

    utils.Assert(
        date.GetYear() == 0,
        "Date has been set as 0",
        "Date should be set as 0",
        ofs
    );

    cout << '\n' << "====Test2: Test on Parameterized constructor with user defined value==== \n";
    ofs << '\n' << "====Test2: Test on Parameterized constructor with user defined value==== \n";


    utils.Assert(
        paramDate.GetDay() == 21,
        "Parameterized constructor created with day set as 21",
        "Parameterized constructor should be constructed with day set as 21",
        ofs
    );

    utils.Assert(
        paramDate.GetMonth() == 7,
        "Parameterized constructor created with day set as 7",
        "Parameterized constructor should be constructed with day set as 7", ofs
    );

    utils.Assert(
        paramDate.GetYear() == 2020,
        "Parameterized constructor created with day set as 2020",
        "Parameterized constructor should be constructed with day set as 2020", ofs
    );

    cout << '\n' << "====Test3: Test on Date Class Setters in setting user defined values==== \n";
    ofs << '\n' << "====Test3: Test on Date Class Setters in setting user defined values==== \n";
    unsigned day = 1;
    unsigned month = 1;
    unsigned year = 2000;
    cout << "Test Value: --->" << "day: " << day << ", month: " << month << ", year: " << year << endl;
    ofs << "Test Value: --->" << "day: " << day << ", month: " << month << ", year: " << year << endl;

    paramDate.SetDay(day);
    paramDate.SetMonth(month);
    paramDate.SetYear(year);
    utils.Assert(
        paramDate.GetDay() == day,
        "Set day to 1 successfully",
        "Date day should be set to 1", ofs
    );

    utils.Assert(
        paramDate.GetMonth() == month,
        "Set month to 1 successfully",
        "Date month should be set to 1", ofs
    );

    utils.Assert(
        paramDate.GetYear() == year,
        "Set year to 2000 successfully",
        "Date year should be set to 2000", ofs
    );

    cout << '\n' << "====Test4: Test on output stream of date class==== \n";
    cout << "Test Value: --->" << "day: " << day << ", month: " << month << ", year: " << year << endl;
    cout << "Actual cout display:" << endl;
    cout << paramDate;

    ofs << '\n' << "====Test4: Test on output stream of date class==== \n";
    ofs << "Test Value: --->" << "day: " << day << ", month: " << month << ", year: " << year << endl;
    ofs << "Actual cout display:" << endl;
    ofs << paramDate;

    ofs.close();

    return 0;
}
