/*
Aim:
To demonstrate constructors with default arguments and calculate bonus.

Algorithm:
1. Start program.
2. Create class Employee with id, name, and salary.
3. Use constructor with default arguments.
4. Implement calcBonus() to compute 10% bonus.
5. Create objects with and without passing arguments.
6. Display salary and bonus.
7. Stop.

Output:
ID: 101, Name: Ravi, Salary: 50000, Bonus: 5000
ID: 102, Name: Priya, Salary: 60000, Bonus: 6000
ID: 0, Name: Unknown, Salary: 0, Bonus: 0
*/
#include <iostream>
using namespace std;

class employee {
    string name;
    float salary;
    static int count;

public:
    employee() {
        name = "unknown";
        salary = 0;
        count++;
    }

    ~employee() {
        cout << "\nDestructor called for employee: " << name << endl;
    }

    void input() {
        cout << "\nEnter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nName: " << name << "\nSalary: " << salary << endl;
    }

    static void showcount() {
        cout << "\nTotal employees: " << count << endl;
    }

    employee highest(employee eq) {
        if (salary > eq.salary)
            return *this;
        else
            return eq;
    }
};

int employee::count = 0;

int main() {
    employee e1, e2, high;

    e1.input();
    e2.input();

    high = e1.highest(e2);

    cout << "\nHighest paid employee:";
    high.display();

    employee::showcount();
    return 0;
}
