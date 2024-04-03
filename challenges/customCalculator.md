# Custom Calculator
## Problem Statement
Create 4 functions above your main function: add, subtract, multiply, and divide. Each function should take in two integers and return the result of the operation.

Then in your main function, create 2 integers and apply each function to them. Print out the result of each function

## Starter Code
copy and paste the code below as a starting point for your solution. I've already created the add function for you and called it in main.
```{c++}
#include <iostream>
using namespace std;

// Adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 7;
    int b = 3;
    cout << add(a, b) << endl;
}
```

## Going Further (optional)
Refer back to a previous problem where we wrote a program which divided the product of two numbers by the sum of two numbers. Create a new function which takes in 4 numbers and evaluates the same expression. Use your other functions within this function to calculate the result.
