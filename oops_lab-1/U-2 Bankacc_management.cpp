/*
Aim:
To implement constructor overloading and static member variables using a BankAccount class.

Algorithm:
1. Start the program.
2. Define class BankAccount with accNo, name, balance, and static count.
3. Create default constructor and parameterized constructor.
4. Implement deposit() and withdraw() functions.
5. Create objects using constructors.
6. Display object details.
7. Display total accounts using static function.
8. Stop.

Output:
Acc No: 0, Name: , Balance: 5000
Acc No: 1001, Name: Arjun, Balance: 23000.8
Acc No: 1002, Name: Meena, Balance: 40000.5
Total Accounts: 3
*/
#include <iostream>
using namespace std;
class BankAccount {
    string holder;
    int accno;
    double balance;
    static double total_balance;
public:
    BankAccount(string h, int a, double b) {
        holder = h;
        accno = a;
        balance = b;
        total_balance += b;
    }
    ~BankAccount() {
        cout << "Account of " << holder << " closed." << endl;
        total_balance -= balance;
    }
    void deposit(double amount) {
        balance += amount;
        total_balance += amount;
    }
    double get_balance() const {
        return balance;
    }
    string get_holder() const {
        return holder;
    }
    static void show_total_balance() {
        cout << "Total balance in bank: " << total_balance << endl;
    }
};
double BankAccount::total_balance = 0;
BankAccount richest_account(BankAccount arr[], int n) {
    int index = 0;
    double max_bal = arr[0].get_balance();
    for (int i = 1; i < n; i++) {
        if (arr[i].get_balance() > max_bal) {
            max_bal = arr[i].get_balance();
            index = i;
        }
    }
    return arr[index];
}
int main() {
    BankAccount b[3] = {
        BankAccount("Nitheesh", 101, 5000),
        BankAccount("Dosth", 102, 10000),
        BankAccount("Lucky", 103, 8000)
    };
    b[0].deposit(2000);
    BankAccount::show_total_balance();
    BankAccount rich = richest_account(b, 3);
    cout << "Richest account holder: " << rich.get_holder() << endl;
    return 0;
}
