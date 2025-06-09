//
//  ReuIntern.cpp
//
//  Created by Adam Kohl
//

// Add libraries the functions in this file need 
#include <iostream>

// Reference the class header information by including the local file
#include "ReuIntern.h"

ReuIntern::ReuIntern(std::string machineID)
{
    _machineID = machineID;
}

ReuIntern::ReuIntern(std::string firstName, std::string lastName, std::string machineID)
{
    _firstName = firstName;
    _lastName = lastName;
    _machineID = machineID;
}

void ReuIntern::printInformation(void)
{
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Machine ID: " << _machineID << std::endl;
}