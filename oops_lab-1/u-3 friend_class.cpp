/*
Aim:
To demonstrate how a friend class can access private members of another class.

Algorithm:
1. Create class Student with private marks m1, m2, m3.
2. Create friend class Result to calculate average.
3. Accept marks from the user.
4. Friend class computes average = (m1+m2+m3)/3.
5. Display result.
6. End program.

Output:
Enter marks in 3 subjects: 80 75 90
Average Marks: 81.6667
*/

#include <iostream>
using namespace std;

class Student {
    int m1, m2, m3;
public:
    void getMarks() {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    friend class Result;
};

class Result {
public:
    void displayResult(Student s) {
        float avg = (s.m1 + s.m2 + s.m3) / 3.0f;
        cout << "Average Marks: " << avg << endl;
    }
};

int main() {
    Student s;
    s.getMarks();

    Result r;
    r.displayResult(s);

    return 0;
}
