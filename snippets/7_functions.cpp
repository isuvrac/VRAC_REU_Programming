#include <iostream>

using namespace std;

/*
--------------------------------------------------
    Functions are a way to group code together 
    and give it a name. This allows you to 
    reuse code and make your code more readable.
--------------------------------------------------
*/

// function that adds two numbers and returns the result
/*
    int: the return type of the function
    add: the name of the function
    (int a, int b): the input of the function (also called parameters or arguments)
*/
int add(int a, int b) {
    return a + b;
}

// function which returns the sum of all elements in an array
/*
    int: the return type of the function
    sumArray: the name of the function
    (int arr[], int size): the input of the function (also called parameters or arguments)
*/
int sumArray(int arr[], int size) {
    int sum = 0;

    // loop through the array and add each element to sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

// function to calculate the time for a ball to hit the ground
/*
    double: the return type of the function
    timeToFall: the name of the function
    (double height, double gravity = 9.81): the input (Notice that gravity has a default value)
*/
double timeToFall(double height, double gravity = 9.81) {
    double g = 9.81; // acceleration due to gravity
    double t = sqrt((2 * height) / g); // calculate the time

    return t;
}

// main is a special function that is called when the program starts!
int main() {
    int sum = add(5, 8); // call the add function and store the result in sum
    cout << sum << endl;
}
