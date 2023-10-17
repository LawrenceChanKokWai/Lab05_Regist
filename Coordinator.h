/// @file Coordinator.h
/// @brief Object Class for the Coordinator Class.
///
/// This class contains the unit coordinator details
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai
///
///

#ifndef COORDINATOR_H_INCLUDED
#define COORDINATOR_H_INCLUDED

#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

/// @brief This class contains the unit coordinator details
/// consisting constructor, getters, setters
/// member functions, and overloaded output and input stream.
///
/// @author Chan Kok Wai (33924804)
/// @version 1.0.0
///
class Coordinator
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the unit coordinator object and creates a
    ///  coordinator with default values of coordinator name, and email as empty string.
    ///  room number and phone number as 0.
    ///
    Coordinator();

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the unit coordinator name of the unit.
    ///
    /// @return The coordinator name of the unit
    ///
    string GetCoordinatorName() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the room number of the unit.
    ///
    /// @return The room number of the unit
    ///
    long GetRoomNumber() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the unit coordinator phone number.
    ///
    /// @return The coordinator phone number of the unit.
    ///
    long GetPhoneNumber() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the unit coordinator email address.
    ///
    /// @return The coordinator's email address of the unit.
    ///
    string GetEmail() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the unit coordinator's name.
    ///
    /// @param[in] &coordinatorName The reference of a coordinator name.
    /// @return Void
    ///
    void SetCoordinatorName(string &coordinatorName);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the unit's room number.
    ///
    /// @param[in] roomNumber The unit's room number.
    /// @return Void
    ///
    void SetRoomNumber(long roomNumber);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the coordinator's phone number.
    ///
    /// @param[in] phoneNumber The coordinator's phone number.
    /// @return Void
    ///
    void SetPhoneNumber(long phoneNumber);

    ///
    /// @brief Procedure
    ///
    /// @details This function sets the coordinator's email address.
    ///
    /// @param[in] email The reference of a coordinator's email address.
    /// @return Void
    ///
    void SetEmail(string &email);

private:
    string m_coordinatorName;
    long m_roomNumber;
    long m_phoneNumber;
    string m_email;
};

///
/// @brief Overload output stream operator
///
/// @details This is a member function that directly access into
/// the member variables. This outputs the user defined Coordinator format.
///
/// @param[in] output ostream extraction of user defined variable of the coordinator (first parameter).
/// @param[in] C The coordinator class variable to be used for extraction (second parameter).
/// @return output The display output format of the coordinator.
///
ostream &operator << (ostream &output, const Coordinator &C);

///
/// @brief Overload input stream operator
///
/// @details This is a member function that directly access into
/// the member variables. This inputs the coordinator defined unit format.
///
/// @param[in] input istream insertion of user defined variable of the coordinator (first parameter).
/// @param[in] C The coordinator class variable to be used for insertion (second parameter).
/// @return input The insertion format of the coordinator.
///
istream &operator >> (istream &input, Coordinator &C);

#endif // COORDINATOR_H_INCLUDED
