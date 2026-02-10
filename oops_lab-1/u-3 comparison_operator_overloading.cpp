
/*
Aim:
To overload the > operator to compare two rectangle areas.

Algorithm:
1. Create Rectangle class with length and breadth.
2. Create function area() returning length * breadth.
3. Overload operator> to compare areas.
4. Display which rectangle is larger.
5. End the program.

Output:
Enter length and breadth: 10 5
Enter length and breadth: 6 8
Rectangle 1 is larger
*/

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }
    int area() {
        return length * breadth;
    }
    bool operator>(Rectangle r) {
        return this->area() > r.area();
    }
};

int main() {
    Rectangle r1, r2;

    r1.getData();
    r2.getData();

    if (r1 > r2)
        cout << "Rectangle 1 is larger" << endl;
    else
        cout << "Rectangle 2 is larger" << endl;

    return 0;
}
