/*

# Experiment: Finding the Biggest of Three Numbers

## Aim:

To write a Java program to find the largest among three numbers using if-else statements.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read three numbers `x`, `y`, and `z`.
4. Check whether `x` is greater than both `y` and `z`.
5. If true, display "First number is big".
6. Otherwise, check whether `y` is greater than both `x` and `z`.
7. If true, display "Second number is big".
8. Otherwise, display "Third number is big".
9. Stop the program.

## Program:

*/

import java.util.Scanner;

public class lo3
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

    // Read the third number
    System.out.println("Enter third number:");
    int z = sc.nextInt();

    // Check whether the first number is largest
    if (x > y && x > z)
    {
        System.out.println("First number is big");
    }
    // Check whether the second number is largest
    else if (y > x && y > z)
    {
        System.out.println("Second number is big");
    }
    // Otherwise, the third number is largest
    else
    {
        System.out.println("Third number is big");
    }

    // Close Scanner
    sc.close();
}


}

/*

## Sample Output:

Enter first number:
10
Enter second number:
25
Enter third number:
15
Second number is big

## Result:

Thus, the Java program to find the largest among three numbers using if-else statements was implemented and executed successfully.
*/
