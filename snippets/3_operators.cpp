#include <iostream>

int main() {
    /*
    ----------------------------------------
        Operators are used to perform
        operations on variables and values
    ----------------------------------------
    */

    // Arithmetic operators ----------------------------------------
    int a = 5;
    int b = 2;
    
    int sum = a + b; // sum
    int difference = a - b; // difference
    int product = a * b; // product
    int quotient = a / b; // quotient

    std::cout << "sum: " << sum << std::endl;
    std::cout << "difference: " << difference << std::endl;
    std::cout << "product: " << product << std::endl;
    std::cout << "quotient: " << quotient << std::endl << std::endl;

    // Boolean operators --------------------------------------------
    bool c = true;
    bool d = false;

    bool andResult = c && d; // and (true if both 'c' and 'd' are true)
    bool orResult = c || d; // or (true if either 'c' or 'd' are true)
    bool notResult = !c; // not (opposite of 'c')

    std::cout << "andResult: " << andResult << std::endl;
    std::cout << "orResult: " << orResult << std::endl;
    std::cout << "notResult: " << notResult << std::endl << std::endl;

    // Comparison operators -----------------------------------------
    int e = 5;
    int f = 2;

    bool equal = e == f; // equals (true if 'e' is equal to 'f')
    bool notEqual = e != f; // not equal (true if 'e' is not equal to 'f')
    bool greaterThan = e > f; // greater than (true if 'e' is greater than 'f')
    bool lessThan = e < f; // less than (true if 'e' is less than 'f')
    bool greaterThanOrEqual = e >= f; // greater than or equal (true if 'e' is greater than or equal to 'f')
    bool lessThanOrEqual = e <= f; // less than or equal (true if 'e' is less than or equal to 'f')

    std::cout << "equal: " << equal << std::endl;
    std::cout << "notEqual: " << notEqual << std::endl;
    std::cout << "greaterThan: " << greaterThan << std::endl;
    std::cout << "lessThan: " << lessThan << std::endl;
    std::cout << "greaterThanOrEqual: " << greaterThanOrEqual << std::endl;
    std::cout << "lessThanOrEqual: " << lessThanOrEqual << std::endl << std::endl;
}
