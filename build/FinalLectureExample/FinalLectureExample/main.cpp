//
//  main.cpp
//
//  Created by Adam Kohl
//
/* Need to include local headers to instantiate desired classes */
#include "VracEmployee.h"
#include "ReuIntern.h"
#include "GradStudent.h"


int main(int argc, const char* argv[]) {

    /* Create VRAC employees
       Employee # 1 
       - no information prior to class instantiation             
       - need to use set methods
    */
    VracEmployee employee1 = VracEmployee();
    employee1.setFirstName("Adam");
    employee1.setLastName("Kohl");
    employee1.setBankAccountNumber(1);
    employee1.printInformation();

    /* Employee # 2
       - prior information available */
    VracEmployee employee2 = VracEmployee("Alex", "Renner");
    employee2.setBankAccountNumber(2);
    employee2.printInformation();


    /* Create REU interns
       REU intern # 1 
       - no information prior to class instantiation
       - need to use set methods
    */
    ReuIntern intern1 = ReuIntern();
    intern1.setFirstName("Johann");
    intern1.setLastName("Chen");
    intern1.setLabMachine("Machine 1");
    intern1.printInformation();

    /* REU intern # 2 - prior information available */
    ReuIntern intern2 = ReuIntern("Jacob", "Becker", "Machine 2");
    intern2.printInformation();


    /* Create graduate students
       Graduate student # 1 - no information prior to class instantiation
                            - need to use set methods
    */
    GradStudent gradStudent1 = GradStudent();
    gradStudent1.setFirstName("Adam");
    gradStudent1.setLastName("Kohl");
    gradStudent1.setCubicle("By the dolphin poster");

    /* Graduate student # 2 - prior information available */
    GradStudent gradStudent2 = GradStudent("Kate", "Wang");
    gradStudent2.setCubicle("Accross from Adam");
    gradStudent2.printInformation();

    return 0;
}