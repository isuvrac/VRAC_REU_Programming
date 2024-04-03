# Numbers Between
## Problem Statement
Create a function called *numbersBetween* which takes 4 arguements (an integer array, its size, a lower bound, and an upper bound) and prints the numbers in the array that are between the lower and upper bounds (inclusive). For example, if the array is [1, 2, 3, 4, 5], the lower bound is 2, and the upper bound is 4, the function should print out 2, 3, and 4.

The function should return the number 0 upon successful completion.

## Starter Code
```{c++}
#include <iostream>
using namespace std;

// Your function goes here

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Call your function here

    return 0;
}
```

## Hints
<details>
<summary>[click here]</summary>

1. The function declaration for sumsToTen should look like this:
```{c++}
bool numbersBetween(int arr[], int length, int lowerBound, int upperBound) {
    // Your code goes here
}
```
</details>
<br>

## Going Further (optional)
Add error checking to your function and return the number 1 if the function fails.

The function fails if:
- The array size is less than 1.
- The lower bound is greater than the upper bound.
- The lower bound is less than the smallest number in the array.
- The upper bound is greater than the largest number in the array.
