#ifndef COORDINATOR_H_INCLUDED
#define COORDINATOR_H_INCLUDED

#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

class Coordinator
{
public:
    Coordinator();

    string GetCoordinatorName() const;
    long GetRoomNumber() const;
    long GetPhoneNumber() const;
    string GetEmail() const;

    void SetCoordinatorName(string &coordinatorName);
    void SetRoomNumber(long roomNumber);
    void SetPhoneNumber(long phoneNumber);
    void SetEmail(string &email);

private:
    string m_coordinatorName;
    long m_roomNumber;
    long m_phoneNumber;
    string m_email;
};

ostream &operator << (ostream &output, const Coordinator &C);
istream &operator >> (istream &input, Coordinator &C);

#endif // COORDINATOR_H_INCLUDED
