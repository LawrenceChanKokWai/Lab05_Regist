/// @file Unit.h
/// @brief Object Class for the Unit Class.
///
/// This class contains the unit
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

///
/// Maximum array size for unit name supported
///
/// @showinitializer
///
const unsigned UnitNameSize = 40;

///
/// Maximum array size for unit id supported
///
/// @showinitializer
///
const unsigned UnitIdSize = 10;

/// @brief This class contains the unit
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Unit
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the unit object and creates a
    ///  unit with default  values of unit name, and unit id as empty string.
    ///
    Unit();

    ///
    /// @brief Parameterized constructor
    ///
    /// @details This initialize the unit object and creates a
    /// a unit with user defined parameters.
    ///
    /// @param[in] unitName The name of the unit ( first parameter )
    /// @param[in] unitId The unit id of the enrollment mode ( second parameter )
    /// @param[in] credit The number of credit obtained ( third parameter )
    ///
    Unit( const char * unitName, const char *unitId, unsigned credit );

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the unit id of the unit.
    ///
    /// @return The unit id of the unit.
    ///
    const char *GetUnitId() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the unit name of the unit.
    ///
    /// @return The unit name of the unit.
    ///
    const char *GetUnitName() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the unit id of a unit.
    ///
    /// @param[in] *unitId A pointer unitId pointing to index 0 of unitId.
    /// @return Void
    ///
    void SetUnitId(const char *unitId);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the unit name of a unit.
    ///
    /// @param[in] *unitName A pointer unitName pointing to index 0 of unitName.
    /// @return Void
    ///
    void SetUnitName(const char *unitName);

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the sum of credits from all units.
    ///
    /// @see GetCredits()
    /// @return The sum of credits from all units.
    ///
    unsigned GetCredits() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the sum of credits.
    ///
    /// @see SetCredits(unsigned credit)
    /// @param[in] credit The sum of credit from all units.
    /// @return Void
    ///
    void SetCredits( unsigned credit );

    ///
    /// @brief Overload output stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This outputs the user defined unit format.
    ///
    /// @param[in] os ostream extraction of user defined variable of the unit (first parameter).
    /// @param[in] U The unit class variable to be used for extraction (second parameter).
    /// @return os The display output format of the unit.
    ///
    friend ostream & operator <<( ostream & os, const Unit & U );

    ///
    /// @brief Overload input stream operator
    ///
    /// @details This is a friend member function that directly access into
    /// the member variables. This inputs the user defined unit format.
    ///
    /// @param[in] input istream insertion of user defined variable of the unit (first parameter).
    /// @param[in] U The unit class variable to be used for insertion (second parameter).
    /// @return input The insertion format of the unit.
    ///
    friend istream & operator >>( istream & input, Unit & U );

private:
    char m_unitName[UnitNameSize];
    char m_unitId[UnitIdSize];
    unsigned  m_credits;
};


inline unsigned Unit::GetCredits() const
{
    return m_credits;
}

inline void Unit::SetCredits( unsigned credit )
{
    m_credits = credit;
}

#endif
