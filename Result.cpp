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

Result::Result(Unit &unit, float marks)
{
    m_unit = unit;
    m_marks = marks;
}

void Result::GetUnit( Unit &unit ) const
{
    unit = m_unit;
}

float Result::GetMarks() const
{
    return m_marks;
}

void Result::SetUnit(Unit &unit)
{
    m_unit = unit;
}

void Result::SetMarks(float marks)
{
    m_marks = marks;
}

ostream &operator << (ostream &outputStream, const Result &R)
{
    const unsigned spacing = 4;

    outputStream << R.m_unit
                                << left << setw(spacing) << "" << "Marks:" << setw(6) << "" << R.m_marks << '\n';

    return outputStream;
}

istream &operator >> (istream &inputStream, Result &R)
{
    inputStream >> R.m_unit >> R.m_marks;

    return inputStream;
}