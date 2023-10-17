#include "Coordinator.h"

Coordinator::Coordinator()
{
    m_coordinatorName = "";
    m_roomNumber = 0;
    m_phoneNumber = 0;
    m_email = "";
}

string Coordinator::GetCoordinatorName() const
{
    return m_coordinatorName;
}

long Coordinator::GetRoomNumber() const
{
    return m_roomNumber;
}

long Coordinator::GetPhoneNumber() const
{
    return m_phoneNumber;
}

string Coordinator::GetEmail() const
{
    return m_email;
}

void Coordinator::SetCoordinatorName(string &coordinatorName)
{
    m_coordinatorName = coordinatorName;
}

void Coordinator::SetRoomNumber(long roomNumber)
{
    m_roomNumber = roomNumber;
}

void Coordinator::SetPhoneNumber(long phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

void Coordinator::SetEmail(string &email)
{
    m_email = email;
}

ostream &operator << (ostream &output, const Coordinator &C)
{
    const unsigned spacing = 4;
    output << left  << setw(spacing) << "" << "Unit Coordinator:" << setw(3) << "" << C.GetCoordinatorName() << '\n'
                                << setw(spacing) << "" << "Room Number:" << setw(8) << "" << C.GetRoomNumber() << '\n'
                                << setw(spacing) << "" << "Phone Number:" << setw(7) << "" << C.GetPhoneNumber() << '\n'
                                << setw(spacing) << "" << "Email:" << setw(14) << "" << C.GetEmail() << '\n';
    return output;
}

istream &operator >> (istream &input, Coordinator &C)
{
    string tempField;

    getline(input, tempField, ',');
    C.SetCoordinatorName(tempField);

    getline(input, tempField, ',');
    C.SetRoomNumber(stoi(tempField));

    getline(input, tempField, ',');
    C.SetPhoneNumber(stoi(tempField));

    getline(input, tempField, ',');
    C.SetEmail(tempField);

    return input;
}
