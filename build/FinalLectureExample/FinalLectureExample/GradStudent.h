//
//  GradStudent.h
//
//  Created by Adam Kohl
//

#pragma once

// Add libraries the functions in this file need 
// Don't need #include <string> ... referenced in VracEmployee.h

// Local headers
#include "VracEmployee.h"

class GradStudent : public VracEmployee {

public:
    /* Constructors */
    GradStudent() {};
    GradStudent(std::string firstName, std::string lastName);
    ~GradStudent() {};

    /* Get methods */
    std::string getCubicle(void) { return _cubicleID; };

    /* Set methods */
    void setCubicle(std::string cubicleID) { _cubicleID = cubicleID; };

    /* Methods */
    void printInformation(void);

protected:
    std::string _cubicleID;
};

