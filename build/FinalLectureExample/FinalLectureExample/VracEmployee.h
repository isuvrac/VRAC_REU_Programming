//
//  VracEmployee.h
//
//  Created by Adam Kohl
//

#pragma once

// Add libraries the functions in this file need 
#include <string>

class VracEmployee {

public:
    /* Constructors */
    VracEmployee() {};
    VracEmployee(std::string fullName);
    VracEmployee(std::string firstName, std::string lastName);
    ~VracEmployee() {};

    /* Get methods */
    std::string getFirstName(void) { return _firstName; };
    std::string getLastName(void) { return _lastName; };
    std::string getProject(void) { return _projectID; };
    int getBankAccountNumber(void) { return _bankAccountNumber; };

    /* Set methods */
    void setName(std::string name);
    void setFirstName(std::string firstName) { _firstName = firstName; };
    void setLastName(std::string lastName) { _lastName = lastName; };
    void setProject(std::string projectID) { _projectID = projectID; };
    void setBankAccountNumber(int accountNumber) { _bankAccountNumber = accountNumber; };

    /* Methods */
    void printInformation(void);

private:
    int _bankAccountNumber;

protected:
    /* Methods */
    void separateName(std::string name);

    /* I. Vars*/
    std::string _firstName;
    std::string _lastName;
    std::string _projectID;
};

