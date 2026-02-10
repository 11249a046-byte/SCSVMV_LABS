/*
Aim:
To concatenate two strings using operator overloading of +.

Algorithm:
1. Create class with character array str.
2. Input two strings.
3. Overload + operator to join strings.
4. Use strcpy() and strcat() to concatenate.
5. Display the resultant string.
6. End the program.

Output:
Enter string: Hello
Enter string: World
Resultant String: HelloWorld
*/

#include <iostream>
#include <string.h>
using namespace std;

class StringConcat {
    char str[50];
public:
    void getString() {
        cout << "Enter string: ";
        cin >> str;
    }
    StringConcat operator+(StringConcat s) {
        StringConcat temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    void display() {
        cout << "Resultant String: " << str << endl;
    }
};

int main() {
    StringConcat s1, s2, s3;

    s1.getString();
    s2.getString();

    s3 = s1 + s2;

    s3.display();

    return 0;
}
