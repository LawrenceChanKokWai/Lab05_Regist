
#include<ostream>

#include "Student.h"
#include "Utils.h"

using namespace std;

int main()
{
    Utils utils;
    Student studentTest;
    long studentIdTest(123456789);
    string studentNameTest("Chan Kok Wai");

    const string INFILE("Tests/StudentTest.txt");
    ofstream ofs(INFILE);
    if(!ofs)
    {
        return -1;
    }

    cout << "Student Test File: \n====Test1: \nTest on default constructor with initial value to be set as 0 for student Id, \nand empty string for student name====" << endl;
    ofs << "Student Test File: \n====Test1: \nTest on default constructor with initial value to be set as 0 for student Id, \nand empty string for student name====" << endl;

    utils.Assert(
        studentTest.GetStudentId() == 0,
        "Student Id has been set to 0 when student is created",
        "Student Id should be set to 0 when student is created",
        ofs
    );

    utils.Assert(
        studentTest.GetStudentName() == "",
        "Student Name has been set to empty string when student object has been created",
        "Student Name should be set to empty string when student object has been created",
        ofs
    );

    studentTest.SetStudentId(123456789);
    studentTest.SetStudentName(studentNameTest);

    cout << '\n' << "====Test2: Test on Setting Student ID: " << studentIdTest << "==== \n";
    ofs << '\n' << "====Test2: Test on Setting Student ID: " << studentIdTest << "==== \n";
    utils.Assert(
        studentTest.GetStudentId() == studentIdTest,
        "Student Id has been set as 123456789",
        "Student Id should be set as 123456789",
        ofs
    );

    cout << '\n' << "====Test3: Test on Setting Student Name: " << studentNameTest << "==== \n";
    ofs << '\n' << "====Test3: Test on Setting Student Name: " << studentNameTest << "==== \n";
    utils.Assert(
        studentTest.GetStudentName() == studentNameTest,
        "Student Name has been set as Chan Kok Wai",
        "Student Name should be set as Chan Kok Wai",
        ofs
    );

    cout << '\n' << "====Test4: Test on Output Stream: ==== \n" << "Actual: \n";
    ofs << '\n' << "====Test4: Test on Output Stream: ==== \n" << "Actual: \n";

    cout << studentTest;

    ofs.close();

    return 0;
}
