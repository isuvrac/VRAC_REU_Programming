#include <iostream>

int main() {
    /*
    ----------------------------------------
        Conditionals are used to perform
        different actions based on the value
        of a variable or expression
    ----------------------------------------
    */

    // if statement --------------------------------------------
    int a = 5;
    if(a > 0) {
        std::cout << "a is positive" << std::endl;
    }

    // if-else statement ---------------------------------------
    int b = -1;
    if(b > 0) {
        std::cout << "b is positive" << std::endl;
    } else {
        std::cout << "b is not positive" << std::endl;
    }

    // if-else if-else statement -------------------------------
    int c = 0;
    if(c > 0) {
        std::cout << "c is positive" << std::endl;
    } else if(c < 0) {
        std::cout << "c is negative" << std::endl;
    } else {
        std::cout << "c is zero" << std::endl;
    }

    // nested if statements ------------------------------------
    int d = 5;
    if(d > 0) {
        if(d > 10) {
            std::cout << "d is greater than 10" << std::endl;
        } else {
            std::cout << "d is less than or equal to 10" << std::endl;
        }
    } else {
        std::cout << "d is not positive" << std::endl;
    }

    // create two variables x and y. if x is than y, print "x is greater than y"
    int x = 5;
    int y = 2;
    if(x > y) {
        std::cout << "x is greater than y" << std::endl;
    }

    // if statement with arrays --------------------------------
    int e[5] = {1, 2, 3, 4, 5};
    if(e[0] == 1) {
        std::cout << "e[0] is 1" << std::endl;
    }
}
