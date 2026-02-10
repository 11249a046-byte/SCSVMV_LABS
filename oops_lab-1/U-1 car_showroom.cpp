/*
Aim:
To develop a class Car that stores and displays car details.

Algorithm:
1. Start the program.
2. Define class Car with model, company, and price.
3. Define display() to print details.
4. Create three car objects.
5. Assign values to each object.
6. Call display() to print details.
7. End the program.

Output:
Company: Toyota, Model: Innova, Price: Rs.2000000
Company: Honda, Model: City, Price: Rs.1200000
Company: Hyundai, Model: i20, Price: Rs.800000
*/

#include<iostream>
using namespace std;
class car{
public:
string model;
string company;
float price;
void display(){
cout<<"company:"<<company
<<",model:"<<model
<<",price:Rs."<<price<<endl;
}
};
int main(){
car c1,c2,c3;
c1.company="toyata";
c1.model="innova";
c1.price=3000000;
c2.company="honda";
c2.model="city";
c2.price=2200000;
c3.company="hyundai";
c3.model="i20";
c3.price=1800000;
c1.display();
c2.display();
c3.display();
return 0;
}
