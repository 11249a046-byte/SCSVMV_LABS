/*
Experiment: Arithmetic Operations Using User-Defined Packages in Java

Aim:
To write a Java program to perform addition, subtraction, multiplication, and division using user-defined packages.

Algorithm:

1. Create four packages named add, sub, mul, and div.
2. Define the Add class in the add package.
3. Define the Sub class in the sub package.
4. Define the Mul class in the mul package.
5. Define the Div class in the div package.
6. Create a class named ArithDemo.
7. Import all four packages into ArithDemo.
8. Create objects for the Add, Sub, Mul, and Div classes.
9. Perform arithmetic operations on 20 and 10.
10. Display the results.

Program 1: Add.java
*/

package add;

public class Add {
public void addop(int a, int b) {
System.out.println("Addition = " + (a + b));
}
}

/*
Program 2: Sub.java
*/

package sub;

public class Sub {
public void subop(int a, int b) {
System.out.println("Subtraction = " + (a - b));
}
}

/*
Program 3: Mul.java
*/

package mul;

public class Mul {
public void mulop(int a, int b) {
System.out.println("Multiplication = " + (a * b));
}
}

/*
Program 4: Div.java
*/

package div;

public class Div {
public void divop(int a, int b) {
if (b != 0) {
System.out.println("Division = " + ((double) a / b));
} else {
System.out.println("Division by zero is not possible.");
}
}
}

/*
Program 5: ArithDemo.java
*/

import add.*;
import sub.*;
import mul.*;
import div.*;

public class ArithDemo {

public static void main(String[] args) {

    // Create objects of package classes
    Add ad = new Add();
    Sub su = new Sub();
    Mul mu = new Mul();
    Div di = new Div();

    // Perform arithmetic operations
    ad.addop(20, 10);
    su.subop(20, 10);
    mu.mulop(20, 10);
    di.divop(20, 10);
}


}

/*
Sample Output:
Addition = 30
Subtraction = 10
Multiplication = 200
Division = 2.0

Result:
Thus, the Java program to perform arithmetic operations using user-defined packages was executed successfully.
*/
