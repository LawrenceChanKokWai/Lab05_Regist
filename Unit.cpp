/// @file Unit.cpp
/// @brief Unit implementation file.
///
/// This file holds all implementation from Unit header file.
/// @see Unit.h
///
/// @author Chan Kok Wai
///
//----------------------------------------

//----------------------------------------
// Includes
#include "Unit.h"

//----------------------------------------
// Global variables/defines

//----------------------------------------
// Prototypes

//----------------------------------------
// Function implementations

Unit::Unit()
{
    m_unitName[0] = '\0';
    m_unitId[0] = '\0';
    m_credits = 0;
}

Unit::Unit( const char * unitName, const char *unitId, unsigned credit )
{
    strncpy( m_unitName, unitName, UnitNameSize );
    strncpy( m_unitId, unitId, UnitIdSize );
    m_credits = credit;
}

const char *Unit::GetUnitId() const
{
    return m_unitId;
}

const char *Unit::GetUnitName() const
{
    return m_unitName;
}

void Unit::SetUnitId(const char *unitId)
{
    strncpy(m_unitId, unitId, UnitIdSize - 1);
    m_unitId[UnitIdSize - 1] = '\0';
}

void Unit::SetUnitName(const char *unitName)
{
    strncpy(m_unitName, unitName, UnitNameSize -1);
    m_unitName[UnitNameSize -1] = '\0';
}

istream & operator >>( istream & input, Unit & U )
{
    input >> U.m_unitName >> U.m_unitId >> U.m_credits;
    return input;
}

ostream& operator<<(std::ostream& os, const Unit& U)
{
    const unsigned spacing = 4;

    os << left << setw(spacing) << "" << "Unit ID:" << setw(spacing) << "" << U.m_unitId << '\n'
       << setw(spacing) << "" << "Unit Name:" << setw(2) << "" << U.m_unitName << '\n'
       << setw(spacing) << "" << "Credits:" << setw(spacing) << "" << U.m_credits << '\n';
    return os;
}
