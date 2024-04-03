# Guessing Game
## Problem Statement/Back Story
 When I was in early High School, I learned how to program Ti-84 calculators during all the classes I hated (English). Eventually, I was able to create a number guessing game with customizable difficulty. In this challenge, you are going to recreate the first game I ever programmed, but in C++ (Hopefully easier).

 ## How it Works
The computer generates a random number between 0 and 100. The user then has a certain number of guesses to guess the number. If the user guesses correctly, they win. If the user runs out of guesses, they lose.

 1. The user will be prompted to enter a difficulty level to determine the number of guesses they get (easy: 10, medium: 6, hard: 3, extreme: 1).
 2. The computer will generate a random number between 0 and 100 (hidden from the user!).
 3. The user will be prompted to enter a guess.
 4. If the user's guess is incorrect, they will be hinted to guess **higher** or **lower** and their guess counter will go down by 1. *Go back to step 3.*
 5. If the user's guess is correct, they win. *Go back to step 1*


## Starter Code
copy and paste the code below as a starting point for your solution. A random number generator which generates a number between 0 and 100 has been included for you using the cstdlib library.
```{c++}
#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int randomNum = rand() % 101;
    // Your code goes here
}
```

## Hints
<details>
<summary>[click here]</summary>

1. Create an outer while loop that will run until the user quits.
2. Inside the while loop, use cin to get the user's difficulty level (as an integer) and store it in a variable.
3. Create an inner while loop that will run until the user runs out of guesses or guesses correctly.
4. Inside the inner while loop, use cin to get the user's guess (as an integer) and store it in a variable.
5. Use an if-else statement to check if the user's guess is equal to the random number. If it's not equal, print out "Incorrect. Guess higher." or "Incorrect. Guess lower." depending on whether the user's guess is higher or lower than the random number.
</details>
<br>

## Going Further (optional)
Now I was ready to show off my program to my friends! BUT, before I could, I needed to know I would be the best at my own game (beat extremem mode EVERYTIME). So, I added in my own easteregg (cheat). 

I'm not going to tell you what I did, but the goal is to be able to guess the number with 100% accuracy in the precense of people watching and get away with it.
