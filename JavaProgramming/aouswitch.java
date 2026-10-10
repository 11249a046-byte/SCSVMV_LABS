/*Experiment: Arithmetic Operations Using Switch Statement

## Aim:

To write a Java program to perform arithmetic operations such as addition, subtraction, multiplication, division, and modulus using a switch statement.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read two integer numbers from the user.
4. Display the menu of arithmetic operations.
5. Read the user's choice.
6. Use a switch statement to perform the selected operation.
7. Display the result.
8. If the choice is invalid, display an error message.
9. Stop the program.

## Program:
*/
import java.util.Scanner;

public class aouswitch
{
    public static void main(String[] args)
    {
        // Create Scanner object to read input
        Scanner sc = new Scanner(System.in);

        // Read the first number
        System.out.println("Enter first number:");
        int x = sc.nextInt();

        // Read the second number
        System.out.println("Enter second number:");
        int y = sc.nextInt();

        // Display the arithmetic operations menu
        System.out.println("Menu:\\n1. Addition\\n2. Subtraction\\n3. Multiplication\\n4. Division\\n5. Modulus\\nEnter your choice:");

        // Read the user's choice
        int choice = sc.nextInt();

        // Perform the selected operation using switch
        switch (choice)
        {
            case 1:
                // Addition
                System.out.println("Result = " + (x + y));
                break;

            case 2:
                // Subtraction
                System.out.println("Result = " + (x - y));
                break;

            case 3:
                // Multiplication
                System.out.println("Result = " + (x * y));
                break;

            case 4:
                // Division
                if (y != 0)
                    System.out.println("Result = " + (x / y));
                else
                    System.out.println("Division by zero is not possible");
                break;

            case 5:
                // Modulus
                if (y != 0)
                    System.out.println("Result = " + (x % y));
                else
                    System.out.println("Modulus by zero is not possible");
                break;

            default:
                // Handle invalid choice
                System.out.println("Invalid choice");
                break;
        }

        // Close Scanner
        sc.close();
    }
}
/*

## Sample Output:

Enter first number:
20
Enter second number:
10
Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice:
1
Result = 30


Result:

Thus, the Java program to perform arithmetic operations using a switch statement was implemented and executed successfully.*/
