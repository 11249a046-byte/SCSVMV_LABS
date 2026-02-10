/*
Aim:
To design a C++ program using classes that manages student details and demonstrates
constructors, destructors, static members, inline functions, arrays, objects as arguments,
and returning objects.

Algorithm:
1. Start the program.
2. Define class Student with name, roll, marks[5], and static count.
3. Implement parameterized constructor to initialize members.
4. Implement destructor to display message when object is deleted.
5. Create inline function totalMarks() to return total.
6. Add static function showCount() to display number of students.
7. Create function printGrade(Student) to print grade.
8. Create function topper(Student[], int) to return topper object.
9. Create array of Student objects.
10. Display grade of each student and display topper.
11. Display count.
12. Stop.

Output:
Ravi Grade: A
Sita Grade: B
Anu Grade: A+
Topper: Anu
Total Students: 3
Destructor called for Anu
Destructor called for Sita
Destructor called for Ravi
*/
#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
    int marks[5];  
    static int totalStudents;

public:
    Student(int i, string n, int m[]) {
        id = i;
        name = n;
        for (int j = 0; j < 5; j++)
            marks[j] = m[j];
        totalStudents++;
    }

    ~Student() {
        totalStudents--;
    }

    inline int totalMarks() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += marks[i];
        return sum;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Total Marks: " << totalMarks() << endl;
    }

    static int getTotalStudents() {
        return totalStudents;
    }

    static Student topper(Student s1, Student s2) {
        return (s1.totalMarks() > s2.totalMarks()) ? s1 : s2;
    }
};

int Student::totalStudents = 0;

int main() {
    int marks1[5] = {85, 90, 90, 87, 98};
    int marks2[5] = {91, 80, 85, 86, 98};

    Student s1(532, "neeraj", marks1);
    Student s2(134, "sasi", marks2);

    s1.display();
    s2.display();

    cout << "Total Students: " << Student::getTotalStudents() << endl;

    Student top = Student::topper(s1, s2);
    cout << "Topper is: ";
    top.display();

    return 0;
}
