# Model Dice
## Problem Statement
You are making virtual game with a die rolling feature.

Create a class called *Dice* that models a pair of dice. The class should have the following members:
- 2 private integer variables to store the value of each die.
- A constructor that initializes each die to the value 1.
- A public function called *roll* that rolls each die and stores the result in the corresponding variable.
- A public function called *getSum* that returns the sum of the two dice.

## Starter Code
copy and paste the code below as a starting point for your solution. A random number generator which generates a number 1 to 6 has been included for you using the cstdlib library.
```{c++}
#include <iostream>
#include <cstdlib>
using namespace std;

// Create your Dice class here

int main() {
    srand(time(NULL)); // setup random number generator behind the scenes

    // Test out your bank account here
}
```

## Generating a Random Number
The following code generates a random number between 1 and 6.
```{c++}
int randomNum = rand() % 6 + 1;
```
## Hints
<details>
<summary>[click here]</summary>

1. Create the class definition for Dice.
```{c++}
class Dice {
    // Your code goes here
};
```
2. Create space for private and public members.
```{c++}
class Dice {
    public:
        // public members here
    private:
        // private members here
};
```
3. Add class variables for the value of each die.
```{c++}
class Dice {
    public:
        // public members here
    private:
        int _die1;
        int _die2;
};
```
4. Add a constructor that initializes each die to the value 1
5. Add a public function called *roll* that rolls each die and stores the result in the corresponding variable.
6. Add a public function called *getSum* that returns the sum of the two dice.
</details>
<br>
