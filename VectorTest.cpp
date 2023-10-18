#include<iostream>
#include<fstream>

#include "Vector.h"
#include "Registration.h"
#include "Utils.h"

using namespace std;

int main()
{
    Utils utils;
    Vector<unsigned> testVector;
    Vector<unsigned>anotherVector(testVector);
    Vector<unsigned>thirdVector;
    thirdVector = anotherVector;

    ofstream ofs("Tests/VectorTest.txt");
    if(!ofs)
    {
        return -1;
    }

    cout << "Vector Test File: \n====Test1: Test on default constructor with initial capacity values====" << endl;
    ofs << "Vector Test File: \n====Test1: Test on default constructor with initial capacity values====" << endl;
    utils.Assert(
        testVector.GetCapacity() == 2,
        "Initial Capacity set as 2",
        "Initial Capacity should be set as 2",
        ofs
    );

    utils.Assert(
        testVector.GetUsed() == 0,
        "Initial Used Slot set as 0",
        "Initial Used Slot should be set as 0",
        ofs
    );

    utils.Assert(
        testVector.GetArray() != nullptr,
        "Initial Dynamic Array pointer created, Address is not null",
        "Initial Dynamic Array pointer should be created, Address should not be null",
        ofs
    );

    cout << '\n' << "====Test2: Test on destructor==== \n";
    ofs << '\n' << "====Test2: Test on destructor==== \n";
    testVector.~Vector();
    utils.Assert(
        testVector.GetArray() == nullptr,
        "testVector deleted and set to nullptr",
        "testVector should be deleted and should be set to nullptr",
        ofs
    );

    cout << '\n' << "====Test3: Test on Appending Object==== \n";
    ofs << '\n' << "====Test3: Test on Appending Object==== \n";
    Vector<unsigned>VecOne;
    unsigned objOne(10);
    utils.Assert(
        VecOne.AppendObject(objOne) == true,
        "Object One Been Appended into Vector",
        "Object One Appending into Vector unsuccessful",
        ofs
    );

    cout << '\n' << "====Test4: Test on Getting Object through index 0==== \n";
    ofs << '\n' << "====Test4: Test on Getting Object through index 0==== \n";
    utils.Assert(
        VecOne.GetObjectByIndex(0) == 10,
        "Index 0 of vector retrieved successfully",
        "Index 0 of vector retrieved unsuccessfully",
        ofs
    );

    cout << '\n' << "====Test5: Test on Copy Constructor==== \n";
    ofs << '\n' << "====Test5: Test on Copy Constructor==== \n";
    Vector<unsigned>VecTwo(VecOne);
    cout << "&VecTwo: " << VecTwo.GetArray() << " | " << "&VecOne: " << VecOne.GetArray() << endl;
    ofs << "&VecTwo: " << VecTwo.GetArray() << " | " << "&VecOne: " << VecOne.GetArray() << endl;
    cout << "&VecTwo[0]: " << &VecTwo.GetObjectByIndex(0) << " | " << "&VecOne[0]: " << &VecOne.GetObjectByIndex(0) << endl;
    ofs << "&VecTwo[0]: " << &VecTwo.GetObjectByIndex(0) << " | " << "&VecOne[0]: " << &VecOne.GetObjectByIndex(0) << endl;


    cout << '\n' << "====Test6: Test on Overload Equals Operator==== \n";
    ofs << '\n' << "====Test6: Test on Overload Equals Operator==== \n";
    Vector<unsigned>VecThree;
    VecThree = VecTwo;
    cout << "&VecThree: " << VecThree.GetArray() << " | " << "&VecTwo: " << VecTwo.GetArray() << endl;
    ofs << "&VecThree: " << VecThree.GetArray() << " | " << "&VecTwo: " << VecTwo.GetArray() << endl;
    cout << "&VecThree[0]: " << &VecThree.GetObjectByIndex(0) << " | " << "&VecTwo[0]: " << &VecTwo.GetObjectByIndex(0) << endl;
    ofs << "&VecThree[0]: " << &VecThree.GetObjectByIndex(0) << " | " << "&VecTwo[0]: " << &VecTwo.GetObjectByIndex(0) << endl;

    ofs.close();

    return 0;
}
