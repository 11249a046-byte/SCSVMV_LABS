/*
Aim:
To demonstrate constructors and destructors in nested classes.

Algorithm:
1. Start the program.
2. Create Department class with constructor and destructor.
3. Create University class containing Department object.
4. Initialize using constructor initializer list.
5. Display data.
6. Destructor messages display automatically.
7. Stop.

Output:
Department Computer Science created.
University SCSVMV University initialized.
University: SCSVMV University, Department: Computer Science
University SCSVMV University closed.
Department Computer Science destroyed.
*/
#include<iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    float price;
public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter book price: ";
        cin >> price;
        cin.ignore();
    }
    void displayDetails() const {
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: $" << price << endl;
    }
    float getPrice() const {
        return price;
    }
};
int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();
    Book books[100];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        books[i].inputDetails();
    }
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (books[i].getPrice() > books[maxIndex].getPrice()) {
            maxIndex = i;
        }
    }
    cout << "\n=== Most Expensive Book ===";
    books[maxIndex].displayDetails();
    return 0;
}
