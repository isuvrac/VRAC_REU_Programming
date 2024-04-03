# Roller Coaster Check
## Problem Statement
After last years incident, a theme park has decided to implement a new safety feature. The new roller coaster will only allow riders who are at least 48 inches tall and at most 80 inches tall. Also, the roller coaster will only allow cool people to ride. 

Write a program that checks if a rider is allowed to ride the roller coaster by checking variables using conditional statements. If the rider is allowed to ride, print out "You are allowed to ride the roller coaster." If the rider is not allowed to ride, print out "You are not allowed to ride the roller coaster."

## Starter Code
copy and paste the code below as a starting point for your solution.
```{c++}
#include <iostream>

int main() {
    int inches = 52;
    bool isCool = true;

    // Your code goes here
}
```

## Hints
<details>
<summary>[click here]</summary>

1. Setup a conditional statement to check if the rider is at least 48 inches tall.
```{c++}
if (conditional goes here) {
    // Your code goes here
}
2. Use boolean operators to check if the rider is more than 48 inches tall and less than 80 inches tall, and if the rider is cool.
```
</details>
<br>

## Going Further (optional)
Print out more specific messages for riders who are not allowed to ride. For example, if the rider is too short but is cool, print out "You are not tall enough to ride the roller coaster." If the rider is too tall but is cool, print out "You are too tall to ride the roller coaster." If the rider is not cool but meets the height requirement, print out "You are not cool enough to ride the roller coaster." How many different messages can you print out???

## Hint
<details>
<summary>[click here]</summary>

1. Use nested conditional statements!
</details>
<br>
