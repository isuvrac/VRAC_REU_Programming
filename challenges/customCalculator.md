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
Make one more function called **exponent**. This function should have 2 inputs (value and exponent). It should contain a for loop that repeatedly calls the multiply function and returns the result of the exponentiation.
