/*

# Experiment: Armstrong Number

## Aim:

To write a Java program to check whether a given positive integer is an Armstrong number or not.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read a positive integer `n` from the user.
4. Store the original number in the variable `nu`.
5. Initialize `num` to 0.
6. Extract the last digit using the modulus operator `%`.
7. Calculate the cube of the digit and add it to `num`.
8. Remove the last digit using the division operator `/`.
9. Repeat steps 6–8 until `nu` becomes 0.
10. Compare `num` with the original number `n`.
11. If both are equal, display "The number is Armstrong"; otherwise, display "Not Armstrong".
12. Stop the program.

## Program:

*/

import java.util.Scanner;

public class Armstrong {
public static void main(String[] args)
{
// Declare variables
int n, nu, num = 0, rem;


    // Create Scanner object to read input
    Scanner sc = new Scanner(System.in);

    // Read a positive integer
    System.out.println("Enter any positive integer:");
    n = sc.nextInt();

    // Store the original number
    nu = n;

    // Extract digits and calculate the sum of their cubes
    while (nu != 0)
    {
        // Get the last digit
        rem = nu % 10;

        // Add the cube of the digit
        num = num + rem * rem * rem;

        // Remove the last digit
        nu = nu / 10;
    }

    // Check whether the number is an Armstrong number
    if (num == n)
        System.out.println("The number is Armstrong");
    else
        System.out.println("Not Armstrong");

    // Close Scanner
    sc.close();
}


}

/*

## Sample Output:

Enter any positive integer:
153
The number is Armstrong

## Result:

Thus, the Java program to check whether a given positive integer is an Armstrong number or not was implemented and executed successfully.
*/
