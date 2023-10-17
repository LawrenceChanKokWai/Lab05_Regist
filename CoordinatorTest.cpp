#include<iostream>

#include "Coordinator.h"
#include "Utils.h"

using namespace std;

int main()
{
    Utils utils;
    Coordinator testCoordinator;

    const string INFILE("Tests/CoordinatorTest.txt");
    ofstream ofs(INFILE);

    if(!ofs)
    {
        return -1;
    }

    cout << "Coordinator Test File: \n====Test1: Test on default constructor with coordinator name and email initial value to be set as empty string====" << endl;
    ofs << "Coordinator Test File: \n====Test1: Test on default constructor with coordinator name and email initial value to be set as empty string====" << endl;

    utils.Assert(
        testCoordinator.GetCoordinatorName() == "",
        "Coordinator Name is set to be empty",
        "Coordinator name should be set as empty",
        ofs
    );

    utils.Assert(
        testCoordinator.GetEmail() == "",
        "Coordinator Email is set to be empty",
        "Coordinator Email should be set as empty",
        ofs
    );

    cout << '\n' << "====Test2: Test on Default Constructor with room number & phone number to be set as 0====" << '\n';
    ofs << '\n' << "====Test2: Test on Default Constructor with room number & phone number to be set as 0==== " << '\n';
    utils.Assert(
        testCoordinator.GetRoomNumber() == 0,
        "Room Number has been set to 0",
        "Room number should be set to 0",
        ofs
    );

    utils.Assert(
        testCoordinator.GetPhoneNumber() == 0,
        "Phone Number has been set to 0",
        "Phone number should be set to 0",
        ofs
    );

    string testName("Andrea Leong");
    long testPhoneNumber(12342543);
    long testRoomNumber(40);
    string testEmail("andrea_leong@outlook.com");

    testCoordinator.SetCoordinatorName(testName);
    testCoordinator.SetRoomNumber(testRoomNumber);
    testCoordinator.SetPhoneNumber(testPhoneNumber);
    testCoordinator.SetEmail(testEmail);

    cout << '\n' << "====Test3: Test on Setting Coordinator Name: " << testName << "==== \n";
    ofs << '\n' << "====Test3: Test on Setting Coordinator Name: " << testName << "==== \n";
    utils.Assert(
        testCoordinator.GetCoordinatorName() == testName,
        "Coordinator Name has been set to Andrea Leong",
        "Coordinator Name should be set to Andrea Leong",
        ofs
    );

    cout << '\n' << "====Test4: Test on Setting Room Number: " << testRoomNumber << "==== \n";
    ofs << '\n' << "====Test4: Test on Setting Room Number: " << testRoomNumber << "==== \n";
    utils.Assert(
        testCoordinator.GetRoomNumber() == testRoomNumber,
        "Coordinator Room Number has been set to 40",
        "Coordinator Room Number should be set to 40",
        ofs
    );

    cout << '\n' << "====Test5: Test on Setting Phone Number: " << testPhoneNumber << "==== \n";
    ofs << '\n' << "====Test5: Test on Setting Phone Number: " << testPhoneNumber << "==== \n";
    utils.Assert(
        testCoordinator.GetPhoneNumber() == testPhoneNumber,
        "Coordinator Phone Number has been set to 12342543",
        "Coordinator Phone Number should be set to 12342543",
        ofs
    );

    cout << '\n' << "====Test6: Test on Setting Email: " << testEmail << "==== \n";
    ofs << '\n' << "====Test6: Test on Setting Email: " << testEmail << "==== \n";
    utils.Assert(
        testCoordinator.GetEmail() == testEmail,
        "Coordinator Email has been set to andrea_leong@outlook.com",
        "Coordinator Email should be set to andrea_leong@outlook.com",
        ofs
    );

    cout << '\n' << "====Test7: Test on output Stream: " << "==== \n";
    ofs << '\n' << "====Test7: Test on output Stream: " << "==== \n";

    cout << "Actual Output: " << endl;
    cout << '\t' << testCoordinator;
    ofs << "Actual Output: " << endl;
    ofs << testCoordinator;


    ofs.close();

    return 0;
}
