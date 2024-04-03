#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
    ----------------------------------------
        vectors are a way to store a list
        of data of the same type just like
        arrays, but they are more flexible.

        vectors are a class from the vector
        library, so we need to include it
        at the top of our file.
    ----------------------------------------
    */

    // Create a vector of integers
    vector<int> myVector;

    // Append elements to the end of the vector
    myVector.push_back(23);
    myVector.push_back(67);
    myVector.push_back(120);

    // Remove the last element from the vector
    myVector.pop_back();

    // Access an element in the vector
    int firstElement = myVector[0];
    int secondElement = myVector[1];

    // Get the size of the vector
    int vSize = myVector.size();

    // Print out the vector
    for (int i = 0; i < vSize; i++) {
        cout << myVector[i] << endl;
    }

    return 0;
}