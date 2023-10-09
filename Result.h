/// @file Result.h
/// @brief Object Class for the Result Class.
///
/// This class contains the result
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef RESULT_H_INCLUDED
#define RESULT_H_INCLUDED

#include<iomanip>
#include "Unit.h"

/// @brief This class contains the result
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Result
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the result object and creates a
    ///  result with default values marks as 0.0.
    ///
    Result();

    ///
    /// @brief Parameterized constructor
    ///
    /// @details This initialize the result object and creates a
    /// a result with user defined parameters.
    ///
    /// @param[in] unit Referencing the unit object ( first parameter )
    /// @param[in] marks The mark of a unit ( second parameter )
    ///
    Result(Unit &unit, float marks);

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the unit object for the result.
    ///
    /// @return The unit object.
    ///
    Unit GetUnit() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the mark of a unit.
    ///
    /// @return The mark for a unit.
    ///
    float GetMarks() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the unit object for a result.
    ///
    /// @param[in] &unit A reference unit of a unit object.
    /// @return Void
    ///
    void SetUnit(Unit &unit);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the mark of a unit.
    ///
    /// @param[in] marks A mark of a unit
    /// @return Void
    ///
    void SetMarks(float marks);

    ///
    /// @brief Overload output stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This outputs the user defined result format.
    ///
    /// @param[in] outputStream ostream extraction of user defined variable of the result (first parameter).
    /// @param[in] R The result class variable to be used for extraction (second parameter).
    /// @return outputStream The display output format of the result.
    ///
    friend ostream &operator << (ostream &outputStream, const Result &R);

    ///
    /// @brief Overload input stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This inputs the result defined unit format.
    ///
    /// @param[in] inputStream istream insertion of user defined variable of the result (first parameter).
    /// @param[in] R The result class variable to be used for insertion (second parameter).
    /// @return inputStream The insertion format of the result.
    ///
    friend istream &operator >> (istream &inputStream, Result &R);

private:
    Unit m_unit;
    float m_marks;
};

#endif // RESULT_H_INCLUDED
