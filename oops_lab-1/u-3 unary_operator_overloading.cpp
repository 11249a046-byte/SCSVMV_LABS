/*
Aim:
To overload the unary minus operator to convert Celsius to Fahrenheit.

Algorithm:
1. Create class Temperature with private celsius variable.
2. Take Celsius input from user.
3. Overload unary operator -().
4. When -object is used, convert Celsius to Fahrenheit.
5. Display result.
6. End program.

Output:
Enter temperature in Celsius: 37
Temperature in Fahrenheit: 98.6
*/

#include <iostream>
using namespace std;

class Temperature {
    float celsius;
public:
    void getData() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
    void operator-() {
        float fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t;
    t.getData();
    -t;

    return 0;
}
