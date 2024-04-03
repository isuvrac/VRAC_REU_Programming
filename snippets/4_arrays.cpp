#include <iostream>

int main() {
    /*
    ----------------------------------------
        Arrays are used to store multiple
        values of the same type.

        Arrays are declared with a type and
        size.
    ----------------------------------------
    */

    // Declare an array of size 5
    int a[5];

    // Declare and initialize an array of size 5
    int b[5] = {1, 2, 3, 4, 5};

    // Initialize (set) array values (Nick's Birthday!!)
    a[0] = 7; // "set a AT index 0 equal to 7"
    a[1] = 1;
    a[2] = 3;
    a[3] = 0;
    a[4] = 0;

    // Print array values by accessing them using their index
    std::cout << "a[0]: " << a[0] << std::endl;
    std::cout << "a[1]: " << a[1] << std::endl;
    std::cout << "a[2]: " << a[2] << std::endl;
    std::cout << "a[3]: " << a[3] << std::endl;
    std::cout << "a[4]: " << a[4] << std::endl;
}
