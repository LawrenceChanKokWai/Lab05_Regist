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
    m_count = 0;
}

long Registration::GetStudentId() const
{
    return m_studentId;
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

void Registration::SetStudentId(long studentId)
{
    m_studentId = studentId;
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
    input >> R.m_studentId >> R.m_semester >> R.m_count;

    for(unsigned i = 0; i < R.m_count; i++)
        input >> R.m_result[i];

    return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
    os << "Student ID: " << R.m_studentId << '\n'
       << "Semester:   " << R.m_semester << '\n';

    for(unsigned i = 0; i < R.m_count; i++)
    {
        os << R.m_result[i] << '\n';
    }

    return os;
}