/// @file Date.cpp
/// @brief Date implementation file.
///
/// This file holds all implementation from Date header file.
/// @see Date.h
///
/// @author Chan Kok Wai
///

#include "Date.h"

Date::Date()
{
    m_day = 0;
    m_month = 0;
    m_year = 0;
}

Date::Date(unsigned day, unsigned month, unsigned year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}

unsigned Date::GetDay() const
{
    return m_day;
}

unsigned Date::GetMonth() const
{
    return m_month;
}

unsigned Date::GetYear() const
{
    return m_year;
}

void Date::SetDay(unsigned day)
{
    m_day = day;
}

void Date::SetMonth(unsigned month)
{
    m_month = month;
}

void Date::SetYear(unsigned year)
{
    m_year = year;
}

ostream &operator << (ostream &outputStream, const Date &D)
{
    unsigned spacing = 4;

    outputStream << left << setw(spacing) << "" << "Date:" << setw(7) << ""
                                << D.GetDay() << "/" << D.GetMonth() << "/" << D.GetYear() ;

    return outputStream;
}

istream &operator >> (istream &inputStream, Date &D)
{
    string tempStrField;

    getline(inputStream, tempStrField, '/');
    D.SetDay(stoi(tempStrField));

    getline(inputStream, tempStrField, '/');
    D.SetMonth(stoi(tempStrField));

    if(getline(inputStream, tempStrField, ','))
    {
        D.SetYear(stoi(tempStrField));
    }

    return inputStream;
}
