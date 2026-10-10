/*
Experiment: Single Inheritance in Java

Aim:
To write a Java program to demonstrate single inheritance, where one class inherits the properties and methods of another class.

Algorithm:

1. Create a parent class named Animal.
2. Define an eat() method in the Animal class.
3. Create a child class named Dog that extends Animal.
4. Define a bark() method in the Dog class.
5. Create an object of the Dog class in the main() method.
6. Call the eat() and bark() methods using the Dog object.
7. Display the output.

Program:
*/

class Animal {


// Method of the parent class
void eat() {
    System.out.println("Animal is eating.");
}


}

// Dog inherits the Animal class
class Dog extends Animal {


// Method of the child class
void bark() {
    System.out.println("Dog is barking.");
}


}

public class SingleInheritance {


public static void main(String[] args) {

    // Create an object of the Dog class
    Dog d = new Dog();

    // Call the inherited method
    d.eat();

    // Call the child class method
    d.bark();
}


}

/*
Sample Output:
Animal is eating.
Dog is barking.

Result:
Thus, the Java program to demonstrate single inheritance was executed successfully.
*/
