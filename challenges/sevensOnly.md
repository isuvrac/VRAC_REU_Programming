# Sevens Only
## Problem Statement
Write a program that loops through and array of 10 numbers and prints out the indices of the array which contain the number 7. For example, if the array is [1, 7, 3, 7, 5, 7, 7, 9, 10], the program should print out 1, 3, 5, 6.

## Starter Code
copy and paste the code below as a starting point for your solution.
```{c++}
#include <iostream>

int main() {
    int numbers[10] = {1, 7, 3, 7, 5, 7, 7, 9, 10, 12};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // Your code goes here
}
```

## Hints
<details>
<summary>[click here]</summary>

1. Use a for loop to iterate through the array.
2. Use an if statement to check if the current element is equal to 7.
3. If the current element is equal to 7, print out the index of the current element.
</details>
<br>

## Super Hints
<details>
<summary>[click here]</summary>

1. Use a for loop to iterate through the array.
```{c++}
for (int i = 0; i < 10; i++) {
    // Your code goes here
}
```
2. Use an if statement to check if the current element is equal to 7.
```{c++}
for (int i = 0; i < 10; i++) {
    if (numbers[i] == 7) {
        // Your code goes here
    }
}
```
3. If the current element is equal to 7, print out the index of the current element.
```{c++}
for (int i = 0; i < 10; i++) {
    if (numbers[i] == 7) {
        std::cout << i << std::endl;
    }
}
```
</details>
<br>

## Going Further (optional)
As you iterate through the array, calculate the sum of all the elements in the array. Print out the sum at the end of the program.

## Hint
<details>
<summary>[click here]</summary>

1. Before the for loop, declare a variable to store the sum.
2. Inside the for loop, add the current element to the sum.
3. After the for loop, print out the sum.
</details>
<br>
