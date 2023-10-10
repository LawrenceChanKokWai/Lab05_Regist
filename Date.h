/// @file Date.h
/// @brief Date Class for the Registration Application.
///
/// This class contains the date
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

/// @brief This class contains the date
/// This class contains constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @see Date.h
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Date
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the date object and creates a
    ///  date with default values of day, month, year as 0.
    ///
    Date();

    ///
    ///  @brief  Parameterized constructor
    ///
    ///  @details This initialize the date object and creates a
    ///  date with user defined values of day, month, year.
    ///
    Date(unsigned day, unsigned month, unsigned year);

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the day of the date.
    ///
    /// @return The day of the date.
    ///
    unsigned GetDay() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the month of the date.
    ///
    /// @return The month of the date.
    ///
    unsigned GetMonth() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the year of the date.
    ///
    /// @return The year of the date.
    ///
    unsigned GetYear() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the day of the date.
    ///
    /// @param[in] day The day of the date.
    /// @return Void
    ///
    void SetDay(unsigned day);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the month of the date.
    ///
    /// @param[in] month The month of the date.
    /// @return Void
    ///
    void SetMonth(unsigned month);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the year of the date.
    ///
    /// @param[in] year The year of the date.
    /// @return Void
    ///
    void SetYear(unsigned year);

private:
    unsigned m_day;
    unsigned m_month;
    unsigned m_year;
};

///
/// @brief Overload output stream operator
///
/// @details This is a friend member function that directly access into
/// the member variables. This outputs the user defined date format.
///
/// @param[in] outputStream ostream extraction of user defined output format of the date (first parameter).
/// @param[in] D The date class variable to be used for extraction (second parameter).
/// @return outputStream The display output format of the date.
///
ostream &operator << (ostream &outputStream, const Date &D);

///
/// @brief Overload input stream operator
///
/// @details This is a friend member function that directly access into
/// the member variables. This inputs the user defined date format.
///
/// @param[in] inputStream istream insertion of user defined variable of the date (first parameter).
/// @param[in] D The date class variable to be used for insertion (second parameter).
/// @return input The insertion format of the date.
///
istream &operator >> (istream &inputStream, Date &D);

#endif // DATE_H_INCLUDED
