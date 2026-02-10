/*
Aim:
To overload the assignment operator to copy book details.

Algorithm:
1. Create class Book with title and price.
2. Input book details.
3. Overload operator= to copy values.
4. Assign one book to another.
5. Display the copied data.
6. End program.

Output:
Enter book title: C++
Enter price: 450
Copied Book Details:
Title: C++, Price: 450
*/

#include <iostream>
#include <string.h>
using namespace std;

class Book {
    char title[50];
    float price;
public:
    void getData() {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void operator=(Book &b) {
        strcpy(title, b.title);
        price = b.price;
    }
    void display() {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

int main() {
    Book b1, b2;

    b1.getData();
    b2 = b1;

    cout << "\nCopied Book Details:\n";
    b2.display();

    return 0;
}
