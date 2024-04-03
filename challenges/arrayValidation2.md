# Array Validation 2
## Problem Statement
You are part of a programming team tasked with validating data as it passes through a system of applications. Your job is to make sure the data is in correct format before it is passed to the next part of the system.

The data is an array of integers.

In order for the data to be valid, it must meet the following 3 criteria:
- The array must contain exactly 5 elements.
- The array must contain only positive integers.
- The sum of the array must be 10.

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
bool validateArray(int arr[], int length) {
    // Your code goes here
}
```
</details>
<br>

## Going Further (optional)
Split your validateArray function into 3 more functions, each of which validates one of the 3 criteria. Then, call these functions from a single validateArray function.
