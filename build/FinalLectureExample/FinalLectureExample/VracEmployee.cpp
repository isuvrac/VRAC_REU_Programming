//
//  VracEmployee.cpp
//
//  Created by Adam Kohl
//

// Add libraries the functions in this file need 
#include <iostream>

// Reference the class header information by including the local file 
#include "VracEmployee.h"

VracEmployee::VracEmployee(std::string fullName)
{
    separateName(fullName);
}

VracEmployee::VracEmployee(std::string firstName, std::string lastName)
{
    _firstName = firstName;
    _lastName = lastName;
}

void VracEmployee::setName(std::string name)
{
    separateName(name);
}

void VracEmployee::printInformation(void)
{
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Bank Account: " << _bankAccountNumber << std::endl;
}

void VracEmployee::separateName(std::string name) {
    size_t pos = name.find(' ');
    if (pos != std::string::npos) {
        _firstName = name.substr(0, pos);
        _lastName = name.substr(pos + 1);
    }
    else {
        _firstName = name;
        _lastName = "";
    }
}
