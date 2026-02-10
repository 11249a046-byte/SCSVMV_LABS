/*
Aim:
To implement a class Account that stores customer account details.

Algorithm:
1. Start the program.
2. Define a class Account with accNo, name, and balance.
3. Define display() to print account details.
4. Create two account objects.
5. Assign values to both objects.
6. Display the details using display().
7. End the program.

Output:
Account No: 1001, Name: Ramesh, Balance: 25000.5
Account No: 1002, Name: Sita, Balance: 40000.75
*/
#include<iostream>
using namespace std;
class account{
public:
int accno;
string name;
float balance;
void display(){
cout<<"account no:"<<accno
<<",name:"<<name
<<",balance:"<<balance<<endl;
}
};
int main(){
account a1,a2;
a1.accno=3400;
a1.name="manaswini";
a1.balance=500000;
a2.accno=5320;
a2.name="neeraj";
a2.balance=521000;
a1.display();
a2.display();
return 0;
}
