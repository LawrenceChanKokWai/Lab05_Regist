/// @file Registration.cpp
/// @brief Registration implementation file.
///
/// This file holds all implementation from Registration header file.
/// @see Registration.h
///
/// @author Chan Kok Wai
///
//----------------------------------------

//----------------------------------------
// Includes
#include "Registration.h"

//----------------------------------------
// Global variables/defines

//----------------------------------------
// Prototypes

//----------------------------------------
// Function implementations

// Default constructor for Registration
Registration::Registration()
{
    m_semester = INITIAL_VALUE;
    m_count = INITIAL_VALUE;
}

void Registration::GetStudent(Student &student) const
{
    student = m_student;
}

void Registration::SetStudent(Student &student)
{
    m_student = student;
}

unsigned Registration::GetSemester() const
{
    return m_semester;
}

// Get registered course credits
unsigned Registration::GetCredits() const
{
    unsigned sum = 0;
    Unit unit;
    for(unsigned i = 0; i < m_count; i++)
    {
        m_result[i].GetUnit(unit);
        sum += unit.GetCredits();
    }
    return sum;
}

unsigned Registration::GetCount() const
{
    return m_count;
}

const Result &Registration::GetResult(const unsigned count) const
{
    return m_result[count];
}

void Registration::SetSemester(unsigned semester)
{
    m_semester = semester;
}

void Registration::SetCount(unsigned count)
{
    m_count = count;
}

void Registration::SetResult(Result &result, unsigned index)
{
    m_result[index] = result;
}

istream & operator >>( istream & input, Registration & R )
{
    string tempStrField;
    Student tempStudentField;
    Result tempResult;

    input >> tempStudentField;
    R.SetStudent(tempStudentField);

    getline(input, tempStrField, ',');
    R.SetSemester(stoi(tempStrField));

    getline(input, tempStrField, ',');
    R.SetCount(stoi(tempStrField));

    for(unsigned i = 0; i < R.GetCount(); i++)
    {
        input >> tempResult;
        R.SetResult(tempResult, i);
    }

    return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
    Student tempStudent;
    R.GetStudent(tempStudent);

    os    << tempStudent
             << "Semester:   " << R.GetSemester() << '\n';

    for(unsigned i = 0; i < R.GetCount(); i++)
    {
        os << R.GetResult(i)<< '\n';
    }

    return os;
}
