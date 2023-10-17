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
    m_unitName = "";
    m_unitId = "";
    m_credits = 0;
}

Unit::Unit( string unitName, string unitId, Coordinator &coordinator, unsigned credit )
{
    m_unitName = unitName;
    m_unitId = unitId;
    m_coordinator = coordinator;
    m_credits = credit;
}

string Unit::GetUnitId() const
{
    return m_unitId;
}

string Unit::GetUnitName() const
{
    return m_unitName;
}

unsigned Unit::GetCredits() const
{
    return m_credits;
}

void Unit::GetCoordinator(Coordinator &coordinator) const
{
    coordinator = m_coordinator;
}

void Unit::SetCoordinator(Coordinator &coordinator)
{
    m_coordinator = coordinator;
}

void Unit::SetUnitId(string unitId)
{
    m_unitId = unitId;
}

void Unit::SetUnitName(string unitName)
{
    m_unitName = unitName;
}

void Unit::SetCredits(unsigned int credit)
{
    m_credits = credit;
}

istream & operator >>( istream & input, Unit & U )
{
    string tempStrField;
    Coordinator tempCoordinatorField;

    getline(input, tempStrField, ',');
    U.SetUnitName(tempStrField);

    getline(input, tempStrField, ',');
    U.SetUnitId(tempStrField);

    input >> tempCoordinatorField;
    U.SetCoordinator(tempCoordinatorField);

    unsigned tempCreditField = 0;
    input >> tempCreditField;
    U.SetCredits(tempCreditField);

    return input;
}

ostream& operator<<(std::ostream& os, const Unit& U)
{
    const unsigned spacing = 4;
    Coordinator tempCoordinatorField;
    U.GetCoordinator(tempCoordinatorField);

    os << left << setw(spacing) << "" << "Unit ID:" << setw(12) << "" << U.GetUnitId() << '\n'
       << setw(spacing) << "" << "Unit Name:" << setw(10) << "" << U.GetUnitName() << '\n'
       << tempCoordinatorField
       << setw(spacing) << "" << "Credits:" << setw(12) << "" << U.GetCredits() << '\n';
    return os;
}
