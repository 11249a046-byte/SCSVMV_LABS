/*

# Experiment: Reversing a Number

## Aim:

To write a Java program to reverse the digits of a given integer using a while loop.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Initialize the variable `reverse` to 0.
4. Read an integer `n` from the user.
5. Repeat the following steps while `n != 0`:

   * Multiply `reverse` by 10.
   * Extract the last digit using `n % 10`.
   * Add the last digit to `reverse`.
   * Remove the last digit using `n = n / 10`.
6. Display the reversed number.
7. Stop the program.

## Program:

*/

import java.util.Scanner;

public class Reverse
{
public static void main(String[] args)
{
// Declare variables
int n;
int reverse = 0;


    // Create Scanner object to read input
    Scanner s = new Scanner(System.in);

    // Read an integer
    System.out.println("Enter an integer:");
    n = s.nextInt();

    // Reverse the digits of the number
    while (n != 0)
    {
        // Shift the digits to the left
        reverse = reverse * 10;

        // Add the last digit
        reverse = reverse + n % 10;

        // Remove the last digit
        n = n / 10;
    }

    // Display the reversed number
    System.out.println("Reverse of the given number: " + reverse);

    // Close Scanner
    s.close();
}


}

/*

## Sample Output:

Enter an integer:
12345
Reverse of the given number: 54321

## Result:

Thus, the Java program to reverse the digits of a given integer using a while loop was implemented and executed successfully.
*/
