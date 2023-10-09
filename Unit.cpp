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
}

Unit::Unit( const char * unitName, const char *unitId, unsigned credit )
{
  strncpy( m_unitName, unitName, UnitNameSize );
  strncpy( m_unitId, unitId, UnitIdSize );
  m_credits = credit;
}

istream & operator >>( istream & input, Unit & U )
{
  input >> U.m_unitName >> U.m_unitId >> U.m_credits;
  return input;
}

ostream & operator <<( ostream & os, const Unit & U )
{
  os << "  Unit:  " << U.m_unitName << '\n'
     << "  Unit Id: " << U.m_unitId << '\n'
     << "  Credits: " << U.m_credits << '\n';
  return os;
}
