/*

# Experiment: Check Whether a Number Is Even or Odd Using Switch Statement

## Aim:

To write a Java program to check whether a given integer is even or odd using a switch statement.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read an integer `n` from the user.
4. Calculate the remainder using `n % 2`.
5. Use a switch statement to check the remainder.
6. If the remainder is `0`, display "The number is even".
7. If the remainder is `1` or `-1`, display "The number is odd".
8. Stop the program.

## Program:

*/

import java.util.Scanner;

public class eorouswitch
{
public static void main(String[] args)
{
// Create Scanner object to read input
Scanner sc = new Scanner(System.in);

    // Read an integer
    System.out.println("Enter a number:");
    int n = sc.nextInt();

    // Check whether the number is even or odd
    switch (n % 2)
    {
        case 0:
            // Number is even
            System.out.println("The number is even");
            break;

        case 1:
        case -1:
            // Number is odd
            System.out.println("The number is odd");
            break;

        default:
            // Default case
            break;
    }

    // Close Scanner
    sc.close();
}


}

/*

## Sample Output:

Enter a number:
7
The number is odd

## Result:

Thus, the Java program to check whether a given integer is even or odd using a switch statement was implemented and executed successfully.
*/
