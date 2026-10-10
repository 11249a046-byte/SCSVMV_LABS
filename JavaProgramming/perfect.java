/*

# Experiment: Checking Whether a Number Is a Perfect Number

## Aim:

To write a Java program to check whether a given positive integer is a perfect number or not.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Initialize the variable `sum` to 0.
4. Read a positive integer `n`.
5. Use a `for` loop from 1 to `n - 1`.
6. Check whether `n` is divisible by `i` using the modulus operator `%`.
7. If divisible, add `i` to `sum`.
8. Compare `sum` with `n`.
9. If both are equal, display "Given number is perfect"; otherwise, display "Not perfect".
10. Stop the program.

## Program:

*/

import java.util.Scanner;

public class perfect
{
public static void main(String[] args)
{
// Declare variables
int n;
int sum = 0;
int i;


    // Create Scanner object to read input
    Scanner s = new Scanner(System.in);

    // Read a positive integer
    System.out.println("Enter any positive integer:");
    n = s.nextInt();

    // Find and add the proper divisors
    for (i = 1; i < n; i++)
    {
        // Check whether i divides n exactly
        if (n % i == 0)
        {
            // Add the divisor to sum
            sum += i;
        }
    }

    // Check whether the number is perfect
    if (sum == n)
        System.out.println("Given number is perfect");
    else
        System.out.println("Not perfect");

    // Close Scanner
    s.close();
}


}

/*

## Sample Output:

Enter any positive integer:
6
Given number is perfect

## Result:

Thus, the Java program to check whether a given positive integer is a perfect number or not was implemented and executed successfully.
*/
