#include <iostream>

int main() {
    /*
    ----------------------------------------
        Loops are used to perform a task
        multiple times

        There are three types of loops:
            - for
            - while
            - do-while
    ----------------------------------------
    */

    // for loop -----------------------------------
    /*
        int i = 0; // initialize
        i < 5; // condition
        i++ // increment
    */
    for(int i = 0; i < 5; i++) {
        std::cout << "i: " << i << std::endl;
    }

    // while loop ---------------------------------
    /*
        int i = 0; // initialize
        i < 5; // condition
        i++ // increment
    */
    int j = 0;
    while(j < 5) {
        std::cout << "j: " << j << std::endl;
        j++;
    }

    // do-while loop -------------------------------
    /*
        int i = 0; // initialize
        i < 5; // condition
        i++ // increment
    */
    int k = 0;
    do {
        std::cout << "k: " << k << std::endl;
        k++;
    } while(k < 5);

    /*
    ----------------------------------------
        EXAMPLE: Loop through an array and 
        print each value
    ----------------------------------------
    */
    int a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        std::cout << a[i] << std::endl; // Notice how the array is accessed using the index 'i'
    }
}
