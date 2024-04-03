# Model Bank Account
## Problem Statement
You are a freelance programmer tasked with creating the backend for a banking application. Specifically, you need to model a bank account in C++. You will be handing off your code to api developers who are requiring the following functionality:
- The ability to create a bank account with a name (string), account number (int), and balance (double).
- The ability to deposit money into a bank account.
- The ability to withdraw money from a bank account.
- The ability to check the balance of a bank account.

Create a class called *BankAccount* that models a bank account and implements the above functionality.

## Starter Code
copy and paste the code below as a starting point for your solution.
```{c++}
#include <iostream>
using namespace std;

// Create your BankAccount class here

int main() {
    // Test out your bank account here
}
```
## Hints
<details>
<summary>[click here]</summary>

1. Create the class definition for BankAccount.
```{c++}
class BankAccount {
    // Your code goes here
};
```
2. Create space for private and public members.
```{c++}
class BankAccount {
    public:
        // public members here
    private:
        // private members here
};
```
3. Add class variables for the name, account number, and balance.
```{c++}
class BankAccount {
    public:
        // public members here
    private:
        string _name;
        int _accountNumber;
        double _balance;
};
```
</details>
<br>

## Going Further (optional)
The api developers want you to extent the functionality of the BankAccount class to make it more robust. Add code to ensure tbat the balance of a bank account cannot be negative. If a user tries to withdraw more money than is in their account, set the balance to 0.

## Hint
<details>
<summary>[click here]</summary>

1. Add an if statement to the withdraw function to check if the amount to withdraw is greater than the balance.
</details>
<br>
