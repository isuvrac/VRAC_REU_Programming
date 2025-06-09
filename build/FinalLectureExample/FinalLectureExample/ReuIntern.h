//
//  ReuIntern.h
//
//  Created by Adam Kohl
//

#pragma once

// Add libraries the functions in this file need 
// Don't need #include <string> ... referenced in VracEmployee.h

// Local headers
#include "VracEmployee.h"

class ReuIntern : public VracEmployee {

public:
    /* Constructor */
    ReuIntern() {};
    ReuIntern(std::string machineID);
    ReuIntern(std::string firstName, std::string lastName, std::string machineID);
    ~ReuIntern() {};

    /* Get methods */
    std::string getLabMachine(void) { return _machineID; };

    /* Set methods */
    void setLabMachine(std::string machineID) { _machineID = machineID; };

    /* Methods */
    void printInformation(void);

protected:
    std::string _machineID;
};

