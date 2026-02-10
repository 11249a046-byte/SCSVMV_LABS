/*
Aim:
To demonstrate the use of a friend function to access private members of two different classes.

Algorithm:
1. Create class Account with private balance.
2. Create class Loan with private loanAmount.
3. Declare friend function checkEligibility() in both classes.
4. Take user input for balance and loan amount.
5. Friend function checks if balance >= 2 × loanAmount.
6. Display “Eligible” or “Not Eligible”.
7. End the program.

Output:
Enter account balance: 50000
Enter loan amount: 20000
Eligible for loan
*/

#include <iostream>
using namespace std;

class Loan;

class Account {
    float balance;
public:
    void getBalance() {
        cout << "Enter account balance: ";
        cin >> balance;
    }
    friend void checkEligibility(Account, Loan);
};

class Loan {
    float loanAmount;
public:
    void getLoan() {
        cout << "Enter loan amount: ";
        cin >> loanAmount;
    }
    friend void checkEligibility(Account, Loan);
};

void checkEligibility(Account a, Loan l) {
    if (a.balance >= 2 * l.loanAmount)
        cout << "Eligible for loan" << endl;
    else
        cout << "Not eligible for loan" << endl;
}

int main() {
    Account acc;
    Loan ln;

    acc.getBalance();
    ln.getLoan();

    checkEligibility(acc, ln);

    return 0;
}
