# Array Validation
## Problem Statement
Create a function called *sumsToTen* which takes two arguements (an integer array and its size) and returns true only if the arrays contents sum to 10. Otherwise, return false.

Call this function in main and print out the result.

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
bool sumsToTen(int arr[], int length) {
    // Your code goes here
}
```
</details>
<br>

## Going Further (optional)
Modify your *sumsToTen* function so that it "fixes" the array, changine 1 or more of the values so that the array sums to 10. change the return type of the function to void.

Then, make another function called *printArray* which takes an integer array and its size and prints out the contents of the array.

Test your functions in main.

## Hints
<details>
<summary>[click here]</summary>

1. After summing the array, find the difference between the sum and 10. Then, add or subtract that difference from one of the values in the array to "fix" it.
2. The function declaration for printArray should look like this:
```{c++}
void printArray(int arr[], int length) {
    // Your code goes here
}
```
</details>
<br>
