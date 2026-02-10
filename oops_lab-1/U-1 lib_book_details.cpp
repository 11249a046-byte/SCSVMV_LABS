/*
Aim:
To create a class that represents books and displays their details.

Algorithm:
1. Start the program.
2. Define a class Book with title, author, and price.
3. Create display() to show book details.
4. Create two book objects.
5. Assign values to each object.
6. Call display() to print details.
7. End the program.

Output:
Title: C++ Programming, Author: Bjarne Stroustrup, Price: Rs.750.5
Title: Data Structures, Author: Mark Allen Weiss, Price: Rs.600.75
*/
#include<iostream>
using namespace std;
class book {
public :
string title;
string author;
float price;
void display(){
cout<<"title:"<<title
<<",author:"<<author
<<",price:Rs."<<price<<endl;
}
};
int main(){
book b1,b2;
b1.title="c++ programming";
b1.author="Bjarne stroustrup";
b1.price=750.50;
b2.title="data structures";
b2.author="marks allen weiss";
b2.price=600.75;
b1.display();
b2.display();
return 0;
}
