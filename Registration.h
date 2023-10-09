/// @file Registration.h
/// @brief Object Class for the Registration Class.
///
/// This class contains the registration
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef REGIST_H
#define REGIST_H

#include <iostream>
#include "Result.h"

using namespace std;

///
/// Maximum array size of result supported
///
/// @showinitializer
///
const unsigned MaxResult = 10;

/// @brief This class contains the registration
/// that includes result class.
/// This class contains constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @see Course.h
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Registration
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the registration object and creates a
    ///  registration with default values of courses count as 0.
    ///
    Registration();

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the student id of the student.
    ///
    /// @return The student id of the student.
    ///
    long GetStudentId() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the semester of the unit.
    ///
    /// @return The semester of the unit.
    ///
    unsigned GetSemester() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the sum of credits from all units.
    ///
    /// @return The sum of credits from all units.
    ///
    unsigned GetCredits() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the sum  of count units.
    ///
    /// @return The sum of count units.
    ///
    unsigned GetCount() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the results from a count.
    ///
    /// @return The result from a count.
    ///
    const Result &GetResult(const unsigned count) const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the student Id.
    ///
    /// @param[in] studentId The student id of a student.
    /// @return Void
    ///
    void SetStudentId(long studentId);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the semester.
    ///
    /// @param[in] semester The semester for the student enrolled with the units.
    /// @return Void
    ///
    void SetSemester(unsigned semester);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the count.
    ///
    /// @param[in] count The count of the units.
    /// @return Void
    ///
    void SetCount(unsigned count);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the result.
    ///
    /// @param[in] result The results from the student.
    /// @return Void
    ///
    void SetResult(Result &result, unsigned index);

    ///
    /// @brief Overload output stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This outputs the user defined registration format.
    ///
    /// @param[in] os ostream extraction of user defined variable of the registration (first parameter).
    /// @param[in] R The registration class variable to be used for extraction (second parameter).
    /// @return os The display output format of the registration.
    ///
    friend ostream & operator <<( ostream & os, const Registration & R);

    ///
    /// @brief Overload input stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This inputs the user defined registration format.
    ///
    /// @param[in] input istream insertion of user defined variable of the registration (first parameter).
    /// @param[in] R The registration class variable to be used for insertion (second parameter).
    /// @return input The insertion format of the registration.
    ///
    friend istream & operator >>( istream & input, Registration & R );

private:
    long m_studentId;
    unsigned m_semester;
    unsigned m_count;
    Result m_result[MaxResult];
};

#endif

