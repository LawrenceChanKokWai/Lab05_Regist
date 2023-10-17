#include "Student.h"

Student::Student()
{
    m_studentId = 0;
    m_studentName = "";
}

long Student::GetStudentId() const
{
    return m_studentId;
}

string Student::GetStudentName() const
{
    return m_studentName;
}

void Student::SetStudentId(long studentId)
{
    m_studentId = studentId;
}

void Student::SetStudentName(string &studentName)
{
    m_studentName = studentName;
}

ostream &operator << (ostream &output, const Student &S)
{
    output   << "\nStudent ID: " << S.GetStudentId() << '\n'
                    << "Student Name: " << S.GetStudentName() << '\n';

    return output;
}

istream &operator >> (istream &input, Student &S)
{
    string tempStrField;

    getline(input, tempStrField, ',');
    S.SetStudentId(stoi(tempStrField));

    getline(input, tempStrField, ',');
    S.SetStudentName(tempStrField);

    return input;
}
