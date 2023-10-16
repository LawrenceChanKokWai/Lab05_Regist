/// @file Student.h
/// @brief Object Class for the Student Class.
///
/// This class contains the student
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

/// @brief This class contains the student
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Student
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the student object and creates a
    ///  student with default values
    ///  student Id as 0,
    ///  student name as empty string
    ///
    Student();

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the student id of a student.
    ///
    /// @return The student id for a student.
    ///
    long GetStudentId() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the student name of a student.
    ///
    /// @return The student name for a student.
    ///
    string GetStudentName() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the student id of a student.
    ///
    /// @param[in] studentId A student id of a student
    /// @return Void
    ///
    void SetStudentId(long studentId);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the student name of a student.
    ///
    /// @param[in] studentId A reference student name of a student
    /// @return Void
    ///
    void SetStudentName(string &studentName);

private:
    long m_studentId;
    string m_studentName;
};

///
/// @brief Overload output stream operator
///
/// @details This is a member function that directly access into
/// the member variables. This outputs the user defined student format.
///
/// @param[in] output ostream extraction of user defined variable of the student (first parameter).
/// @param[in] S The student class variable to be used for extraction (second parameter).
/// @return output The display output format of the student.
///
ostream& operator << (ostream& output, const Student& S);

///
/// @brief Overload input stream operator
///
/// @details This is a member function that directly access into
/// the member variables. This inputs the student defined unit format.
///
/// @param[in] input istream insertion of user defined variable of the student (first parameter).
/// @param[in] S The student class variable to be used for insertion (second parameter).
/// @return input The insertion format of the student.
///
istream& operator >> (istream& input, Student& S);


#endif // STUDENT_H_INCLUDED
