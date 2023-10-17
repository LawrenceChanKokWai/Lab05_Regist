#include<iostream>

#include "Coordinator.h"

using namespace std;

int main()
{
    Coordinator testCoordinator;
    string testName("Andrea Leong");
    string testEmail("andrea_leong@outlook.com");

    testCoordinator.SetCoordinatorName(testName);
    testCoordinator.SetRoomNumber(42);
    testCoordinator.SetPhoneNumber(987854532);
    testCoordinator.SetEmail(testEmail);

    cout << testCoordinator;

    return 0;
}
