# Meal Chance
## Problem Statement
The dining centers on campus has employed a new policy. Instead of meal swipes, staff will flip a coin at the front of the dining center. The student will then guess the coin flip. If the student guesses correctly, they will be allowed to eat. If the coin lands on tails, the student will be turned away and starve that day. 

Write a program that simulates this new policy. The program should ask the user to guess heads or tails. If the user guesses correctly, the program should print out "You may eat." If the user guesses incorrectly, the program should print out "You may not eat."

- Heads is represented by the number 1.
- Tails is represented by the number 0.

## Starter Code
copy and paste the code below as a starting point for your solution. A random number generator which generates either a 0 or 1 has been included for you using the cstdlib library.
```{c++}
#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int randomNum = rand() % 2;
    // Your code goes here
}
```

## Hints
<details>
<summary>[click here]</summary>

1. Use cin to get the user's guess (as an integer) and store it in a variable.
2. Use an if statement to check if the user's guess is equal to the random number.
3. If the user's guess is equal to the random number, print out "You may eat."
4. If the user's guess is not equal to the random number, print out "You may not eat."
</details>
<br>

## Super Hints
<details>
<summary>[click here]</summary>

1. Use cin to get the user's guess (as an integer) and store it in a variable.
```{c++}
int guess;
std::cout << "Enter your guess (0 for tails, 1 for heads): ";
std::cin >> guess;
```
2. Use an if-else statement to check if the user's guess is equal to the random number.
```{c++}
if (guess == randomNum) {
    // Your code goes here
} else {
    // Your code goes here
}
```
3. If the user's guess is equal to the random number, print out "You may eat." Otherwise, print out "You may not eat."
```{c++}
if (guess == randomNum) {
    std::cout << "You may eat." << std::endl;
} else {
    std::cout << "You may not eat." << std::endl;
}
```
</details>
<br>

## Going Further (optional)
If and only if the user guesses correctly, prompt the user to enter the number of meals they would like to eat. Print out this number.

## Hint
<details>
<summary>[click here]</summary>

1. Inside the if statement, use cin to get the number of meals the user would like to eat.
2. Print out the number of meals the user would like to eat.
</details>
<br>

## Going EVEN Further (optional)
Wrap all the code within main in a while loop. The program should continue to run until the user guesses correctly.

## Hint
<details>
<summary>[click here]</summary>

1. Wrap the contents of main in a while loop.
2. Outside of the while loop, declare a boolean variable to keep track of whether or not the user has guessed correctly.
3. Inside the while loop, set the boolean variable to true IF the user guesses correctly.

</details>
<br>