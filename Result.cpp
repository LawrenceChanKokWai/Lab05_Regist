/// @file Result.cpp
/// @brief Result implementation file.
///
/// This file holds all implementation from Result header file.
/// @see Result.h
///
/// @author Chan Kok Wai
///

#include "Result.h"

Result::Result()
{
    m_marks = 0.0;
}

Result::Result(Unit &unit, float marks, Date &date)
{
    m_unit = unit;
    m_marks = marks;
    m_date = date;
}

void Result::GetUnit( Unit &unit ) const
{
    unit = m_unit;
}

void Result::GetDate(Date &date) const
{
    date = m_date;
}

float Result::GetMarks() const
{
    return m_marks;
}

void Result::SetUnit(Unit &unit)
{
    m_unit = unit;
}

void Result::SetDate(Date &date)
{
    m_date = date;
}

void Result::SetMarks(float marks)
{
    m_marks = marks;
}

ostream &operator << (ostream &outputStream, const Result &R)
{
    const unsigned spacing = 4;
    Unit tempUnit;
    Date tempDate;
    R.GetUnit(tempUnit);
    R.GetDate(tempDate);

    outputStream << tempUnit
                 << left << setw(spacing) << "" << "Marks:" << setw(6) << "" << R.GetMarks() << '\n'
                 <<  tempDate << '\n';

    return outputStream;
}

istream &operator >> (istream &inputStream, Result &R)
{

    Unit tempUnit;
    inputStream >> tempUnit;
    R.SetUnit(tempUnit);

    float tempMarks = 0;
    char comma;
    inputStream >> comma >> tempMarks;
    R.SetMarks(tempMarks);

    Date tempDate;
    inputStream >> comma >> tempDate;
    R.SetDate(tempDate);

    return inputStream;
}
