//
//  GradStudent.cpp
//
//  Created by Adam Kohl
//

// Add libraries the functions in this file need 
#include <iostream>

// Reference the class header information by including the local file
#include "GradStudent.h"

GradStudent::GradStudent(std::string firstName, std::string lastName)
{
    _firstName = firstName;
    _lastName = lastName;
}

void GradStudent::printInformation(void)
{
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Cubicle ID: " << _cubicleID << std::endl;
}