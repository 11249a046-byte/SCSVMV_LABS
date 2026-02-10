/*
Aim:
To overload the + operator to add two complex numbers.

Algorithm:
1. Create class Complex with real and imaginary parts.
2. Take input for two complex numbers.
3. Overload operator+ to add real and imaginary parts separately.
4. Store results in a third object.
5. Display the result.
6. End the program.

Output:
Enter real and imaginary parts: 2 3
Enter real and imaginary parts: 1 5
Sum = 3 + 8i
*/

#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = c1 + c2;

    cout << "Sum = ";
    c3.display();

    return 0;
}
