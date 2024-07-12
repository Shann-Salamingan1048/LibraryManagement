#include "../Headers/Account.hpp"

using namespace Acc;
///  Account Class //////////////
void Account::FullAccInfo() const
{
    std::cout << "\nName: " << Name << "\nUsername: " << Username << "\nPassword: " << Password << "\nAddress: " << Address
              << "\nAge: " <<  Age << "\nID Number: " << ID_num << "\n";
}

void Account::Only_ViewAccInfo() const 
{
    std::cout << "\nName: " << Name << "\nAddress: " << Address
              << "\nAge: " <<  Age << "\nID Number: " << ID_num << "\n";
}
// end of Account class

// Student Class //////////////////
void Student::FullAccInfo() const 
{
    Account::FullAccInfo();
}

void Student::Only_ViewAccInfo() const 
{
    Account::Only_ViewAccInfo();
}
// end of student class

// Teacher Class //////////////////
void Teacher::FullAccInfo() const 
{
    Account::FullAccInfo();
}

void Teacher::Only_ViewAccInfo() const 
{
    Account::Only_ViewAccInfo();
}

// end of Teacher class