/*
Experiment 17: Interface Program

Aim:
To write a Java program to demonstrate interface implementation by creating an Animal interface with animalSound() and sleep() methods.

Algorithm:
1. Start the program.
2. Declare an interface named Animal.
3. Declare two methods: animalSound() and sleep().
4. Create a class Cat that implements the Animal interface.
5. Define animalSound() to display "The Cat says: meow meow".
6. Define sleep() to display "zzzz".
7. Create the main() method and an object of the Cat class.
8. Call animalSound() and sleep() using the object.
9. Display the output.
10. Stop the program.

Program:
*/

interface Animal {

    // Declare interface methods
    public void animalSound();

    public void sleep();
}

class Cat implements Animal {

    // Implement the animalSound() method
    public void animalSound() {
        System.out.println("The Cat says: meow meow");
    }

    // Implement the sleep() method
    public void sleep() {
        System.out.println("zzzz");
    }
}

class Main {

    public static void main(String[] args) {

        // Create an object of the Cat class
        Cat myCat = new Cat();

        // Call the interface methods
        myCat.animalSound();
        myCat.sleep();
    }
}

/*
Sample Output:
The Cat says: meow meow
zzzz

Result:
Thus, the Java program demonstrating interface implementation using the Animal interface and Cat class was executed successfully.
*/