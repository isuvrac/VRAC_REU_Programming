# Evens Only
## Problem Statement
Write a function that takes in a vector and returns a new vector containing only the even integers from the original. For example, if the input vector is [3, 6, 4, 9, 1, 10, 12], the function should return [6, 4, 10, 12].

Test your function by calling it from the main function and printing out the result.

## Starter Code
copy and paste the code below as a starting point for your solution.
```{c++}
#include <iostream>
#include <vector>
using namespace std;

// Create your function here

int main() {
    vector<int> numbers = {3, 6, 4, 9, 1, 10, 12};
    // Your code goes here
}
```

## Hints
<details>
<summary>[click here]</summary>

1. Define the function prototype.
```{c++}
vector<int> evensOnly(vector<int> numbers) {
    // Your code goes here
}
```
2. The modulus operator is another operator like addition and subtraction. It returns the remainder of a division operation. For example, 5 % 2 evaluates to 1 because 5 divided by 2 is 2 with a **remainder of 1**. How can we use the modulus operator to check if a number is even?
